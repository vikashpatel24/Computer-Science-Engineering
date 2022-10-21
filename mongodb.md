# ![Logo](docs/leaf.svg) MongoDB README

Welcome to MongoDB!


## Documentation

  https://docs.mongodb.com/manual/



## Components

  - `mongod` - The database server.
  - `mongos` - Sharding router.
  - `mongo`  - The database shell (uses interactive javascript).

## Utilities

  `install_compass` - Installs MongoDB Compass for your platform.

## Building

  See [Building MongoDB](docs/building.md).

## Running

  For command line options invoke:

  ```bash
  $ ./mongod --help
  ```

  To run a single server database:

  ```bash
    $ sudo mkdir -p /data/db
    $ ./mongod
    $
    $ # The mongo javascript shell connects to localhost and test database by default:
    $ ./mongo
    > help
  ```

## Installing Compass

  You can install compass using the `install_compass` script packaged with MongoDB:

  ```bash
    $ ./install_compass
  ```

  This will download the appropriate MongoDB Compass package for your platform
  and install it.

