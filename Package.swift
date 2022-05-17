// swift-tools-version:5.3
import PackageDescription
let package = Package(
    name: "MapstedCore",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "MapstedCore",
            targets: ["MapstedCore"])
    ],
    dependencies: [
            // Here we define our package's external dependencies
            // and from where they can be fetched:
            .package(
                name: "ZipArchive",
                url: "https://github.com/ZipArchive/ZipArchive.git",
                .upToNextMajor(from: "2.0.0")
            ),
           
            .package(
                name: "CocoaMQTT",
                url: "https://github.com/emqx/CocoaMQTT.git",
                .exact("2.0.1")
            ),
            
            .package(
                name: "CocoaAsyncSocket",
                url: "https://github.com/robbiehanson/CocoaAsyncSocket",
                from: "7.6.4"
            )
    ],
    targets: [
        .binaryTarget(
            name: "MapstedCore",
            path: "MapstedCore.xcframework"
        )
    ])
