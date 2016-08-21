// Copyright 2016-present runtime.js project authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

'use strict';

const nameHandle = Symbol('name');

class DiskDriver {
  constructor(name = '') {
    this[nameHandle] = name;
    this.onread = null;
    this.onwrite = null;
    this.ongetformatinfo = null;
  }
  get name() {
    return this[nameHandle];
  }
  read(sector, u8) {
    if (!this.onread) {
      throw new Error('driver was not initialized');
    }
    return this.onread(sector, u8);
  }
  write(sector, u8) {
    if (!this.onwrite) {
      throw new Error('driver was not initialized');
    }
    return this.onwrite(sector, u8);
  }
  get formatInfo() {
    if (!this.ongetformatinfo) {
      throw new Error('driver was not initialized');
    }
    return this.ongetformatinfo();
  }
}

module.exports = DiskDriver;
