# Copyright 2013 Luciad (http://www.luciad.com)
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

require_relative 'gpkg'

describe 'InitGpkg' do
  it 'should return NULL' do
    expect(@db.get_first_value('SELECT InitGpkg()')).to eq(nil)
  end

  it 'should return NULL when called a second time' do
    expect(@db.get_first_value('SELECT InitGpkg()')).to eq(nil)
    expect(@db.get_first_value('SELECT InitGpkg()')).to eq(nil)
  end
end

describe 'CheckGpkg' do
  it 'should raise error when called before InitGpkg' do
    expect { @db.get_first_value('SELECT CheckGpkg()') }.to raise_error
  end

  it 'should return NULL when called after InitGpkg' do
    expect(@db.get_first_value('SELECT InitGpkg()')).to eq(nil)
    expect(@db.get_first_value('SELECT CheckGpkg()')).to eq(nil)
  end
end