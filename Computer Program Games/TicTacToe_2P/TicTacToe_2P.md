import pygame
import math
import time

pygame.init()

width = 500
row = 3

# define what shape the window should be (square)
window = pygame.display.set_mode((width, width))
# display the caption
pygame.display.set_caption("Tic Tac Toe")

# define COLORS
white = (255, 255, 255)
black = (0, 0, 0)
gray = (200, 200, 200)
red = (255, 0, 0)

window_display = pygame.image.load("image/tictactoe.png")
X_image = pygame.transform.scale(pygame.image.load("image/x1.2.png"), (150, 150))
O_image = pygame.transform.scale(pygame.image.load("image/o.png"), (150, 150))

# we are using font "courier"
end_font = pygame.font.SysFont('courier', 40)

window.blit(window_display, (0, 0))
pygame.display.update()
time.sleep(3)
window.fill(white)

# creating function

# creating the draw  function
def draw_grid():
    gap = width//row
    x = 0
    y = 0
    for i in range(row):
        x = i*gap

        pygame.draw.line(window, gray, (x, 0), (x, width), 3)
        pygame.draw.line(window, gray, (0, x), (width, x), 3)
def initialize_grid():
    dis_to_center = width//row//2

    game_array = [[None, None, None], [None, None, None], [None, None, None]]
    for i in range(len(game_array)):
        for j in range(len(game_array[i])):
            x = dis_to_center * (2*j+1)
            y = dis_to_center * (2*i+1)
            game_array[i][j] = (x, y, "", True)

    return game_array


# creating the CLICK function
def click(game_array):
    global x_turn, o_turn, image
    m_x, m_y = pygame.mouse.get_pos()

    for i in range(len(game_array)):
        for j in range(len(game_array[i])):
            x, y, char, can_play = game_array[i][j]
            dis = math.sqrt((x-m_x)**2 + (y-m_y)**2)
            if dis < width//row//2 and can_play:
                if x_turn:
                    image.append((x, y, X_image))
                    x_turn = False
                    o_turn = True
                    game_array[i][j] = (x, y, 'x', False)

                elif o_turn:
                    image.append((x,y,O_image))
                    x_turn = True
                    o_turn = False
                    game_array[i][j] =(x, y, 'o', False)


# creating the HAS-WON function
def has_won(game_array):
    for row in range(len(game_array)):
        if (game_array[row][0] == game_array[row][1] == game_array[row][2] and game_array[row][0] != " "):
            display_mess(game_array[row][0].upper() + " has won")
            return True
    for col in range(len(game_array)):
        if (game_array[0][col] == game_array[1][col] == game_array[2][col] and game_array[0][col] != " "):
            display_mess(game_array[0][col].upper() + " has won")
            return True

    if (game_array[0][0][2] == game_array[1][1][2] == game_array[2][2][2] and game_array[0][0][2] != ""):
        display_mess(game_array[0][0][2].upper() + " has won")
        return True

    if (game_array[0][2][2] == game_array[1][1][2] == game_array[2][0][2] and game_array[0][2][2] != ""):
        display_mess(game_array[0][2][2].upper()+" has won")
        return True

    return False


# creating HAS-DRAWN function
def has_drawn(game_array):
    for i in range(len(game_array)):
        for j in range(len(game_array)):
            if game_array[i][j][2] == "":
                return False

    display_mess("IT'S A DRAW")
    return True


def display_mess(content):
    pygame.time.delay(1000)
    window.fill(white)
    end_text = end_font.render(content, 1, black)
    window.blit(end_text, ((width-end_text.get_width())//2, (width-end_text.get_height())//2))
    pygame.display.update()
    pygame.time.delay(5000)


# creating the RENDER function
def render():
    window.fill(white)
    draw_grid()

    for imag in image:
        x, y, IMAGE = imag
        window.blit(IMAGE, (x-IMAGE.get_width()//2, y-IMAGE.get_height()//2))
    pygame.display.update()


# creating the main function
def main():
    global x_turn , o_turn, image, draw

    image = []
    draw = False
    run = True

    x_turn = True
    # as soon as the game start the first turn is given to 'X'
    o_turn = False
    # reciprocal if you want first symbol as 'O'

    game_array = initialize_grid()

    while run:

        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
            # calling the click function to close the game using the 'cross symbol'
            if event.type == pygame.MOUSEBUTTONDOWN:
              click(game_array)

        render()

        if has_won(game_array) or has_drawn(game_array):
            run = False


while True:
    if __name__ == '__main__':
        main()