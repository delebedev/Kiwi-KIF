Pod::Spec.new do |s|

  s.name         = "Kiwi-KIF"
  s.version      = "1.1.1"
  s.summary      = "Allows to write KIF integration tests using Kiwi framework"
  s.homepage     = "https://github.com/garnett/Kiwi-KIF"
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { "Denis Lebedev" => "d2.lebedev@gmail.com" }
  s.platform     = :ios, '5.1'
  s.source       = { :git => "https://github.com/garnett/Kiwi-KIF.git", :tag => "#{s.version}" }
  s.requires_arc = true
  s.ios.xcconfig = { 'FRAMEWORK_SEARCH_PATHS' => '$(inherited) "$(SDKROOT)/Developer/Library/Frameworks" "$(DEVELOPER_LIBRARY_DIR)/Frameworks" "$(DEVELOPER_DIR)/Platforms/iPhoneSimulator.platform/Developer/Library/Frameworks"' }
  s.framework = 'XCTest'
  s.source_files = 'src'
  s.dependency 'Kiwi', '~>2.3.0'
  s.dependency 'KIF', '~>3.0.7'
end
