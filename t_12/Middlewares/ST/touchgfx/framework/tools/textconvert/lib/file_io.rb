##############################################################################
# This file is part of the TouchGFX 4.16.1 distribution.
#
# <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
# All rights reserved.</center></h2>
#
# This software component is licensed by ST under Ultimate Liberty license
# SLA0044, the "License"; You may not use this file except in compliance with
# the License. You may obtain a copy of the License at:
#                             www.st.com/SLA0044
#
##############################################################################

require 'rubygems'
require 'erb'
require 'fileutils'
require 'pathname'

class FileIO
  def self.write_file(file_name, contents)
    callingPath = Pathname.new($calling_path)
    filePath = Pathname.new(file_name)
    puts "Generating #{filePath.relative_path_from(callingPath)}"
    write_file_silent(file_name, contents)
  end
  def self.write_file_silent(file_name, contents)
    FileUtils.mkdir_p(File.dirname(file_name))
    unless File.exist?(file_name) && contents == File.open(file_name, 'r') { |f| f.read() }
      File.open(file_name, 'w') { |f| f.write(contents) }
    end
  end
end
