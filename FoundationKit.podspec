Pod::Spec.new do |s|
  s.platform = :ios, '11.0'
  s.ios.deployment_target = '11.0'
  s.name = "FoundationKit"
  s.version = "1.0.4"
  s.license = 'MIT'
  s.summary = "Everything that really should be in Foundation, but isn't."
  s.homepage = "https://github.com/kampfgnu/FoundationKit"
  s.description =
    'Consider FoundationKit Foundations big brother. We add lots of useful ' \
    'categories, helpers, classes and macros. ' \
    'FoundationKit is built With ARC for both for iOS 4.0+ and Mac OS 10.6+. ' \
    'If you start a new app today, it is the perfect time to begin with it.'
  s.authors = {
    'Erik Aigner' => 'erik@chocomoko.com',
    'Martin Schürrer' => 'martin@schuerrer.org',
    'Peter Steinberger' => 'foundationkit@petersteinberger.com',
    'Matthias Tretter' => 'myell0w@me.com'
  }
  s.source = { :git => "https://github.com/PocketScientists/FoundationKit.git", :tag => '1.0.4' }
  s.source_files = 'Sources/*.{h,m}', 'Sources/Shorthands/*.{h,m}', 'Sources/Blocks/*.{h,m}', 'FoundationKit/FoundationKit.h'

  s.public_header_files = 'Sources/*.{h}', 'Sources/Shorthands/*.{h}', 'Sources/Blocks/*.{h}', 'FoundationKit/FoundationKit.h'

  s.frameworks = 'CoreGraphics', 'Foundation'

  s.prefix_header_contents = '
#include <FoundationKit.h>
  '
  s.requires_arc = true

end
