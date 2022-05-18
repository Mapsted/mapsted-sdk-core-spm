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
            targets: ["MapstedCoreWrapper"])
    ],
    dependencies: [
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
        .target(name: "MapstedCoreWrapper",
                dependencies: [
                    .target(name: "MapstedCore"),
                    .product(name: "ZipArchive", package: "ZipArchive"),
                    .product(name: "CocoaMQTT", package: "CocoaMQTT"),
                    .product(name: "CocoaAsyncSocket", package: "CocoaAsyncSocket")
                ]
        ),
        .binaryTarget(
            name: "MapstedCore",
            path: "MapstedCore.xcframework"
        )
    ])
