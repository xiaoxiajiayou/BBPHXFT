

Pod::Spec.new do |spec|



  spec.name         = "BBPHXFT"
  spec.version      = "1.0.0"
  spec.summary      = "这是一个测试pod 包."



  spec.homepage     = "https://github.com/xiaoxiajiayou/BBPHXFT"


  spec.license      = { :type => "MIT", :file => "FILE_LICENSE" }


 
  spec.author             = { "xiaoxiajiayou" => "45001339@qq.com" }

   spec.platform     = :ios, "9.0"


  spec.source       = { :git => "https://github.com/xiaoxiajiayou/BBPHXFT.git", :tag => spec.version.to_s }


 

  spec.source_files = 'DHCWADSDK/Classes/*.{h,m}'
  spec.vendored_libraries = 'DHCWADSDK/Classes/libDHCWADSDK.a'
  spec.libraries = 'xml2', 'z'



 
   spec.resources = 'DHCWADSDK/Classes/DHCWAdSDK.bundle'

  # spec.library   = "iconv"
  # spec.libraries = "iconv", "xml2"



  # spec.requires_arc = true

 

end
