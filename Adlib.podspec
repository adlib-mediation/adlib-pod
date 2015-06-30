Pod::Spec.new do |s|
  s.name             = "Adlib"
  s.version          = "1.0.0"
  s.summary          = "Adlib is the ios client interface for Adlib Mediation."
  s.homepage         = "https://adlibmediation.com"
  s.license          = {
     :type => 'Commercial',
     :text => <<-LICENSE
     Copyright (c) Adlib Mediation
     LICENSE
  }
  s.author           = { "Adlib Mediation" => "support@adlib.com" }
  s.source           = { :git => "https://github.com/pgrates/adlib-ios-release.git", :tag => s.version.to_s }

  s.platform     = :ios, '8.0'
  s.requires_arc = true

  # s.ios.preserve_paths      = 'Adlib.framework'
  s.public_header_files = 'Adlib.framework/Headers/*.h'
  s.vendored_frameworks = 'Adlib.framework'
end
