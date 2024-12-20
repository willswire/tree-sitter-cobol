// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterCobol",
    products: [
        .library(name: "TreeSitterCobol", targets: ["TreeSitterCobol"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterCobol",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterCobolTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterCobol",
            ],
            path: "bindings/swift/TreeSitterCobolTests"
        )
    ],
    cLanguageStandard: .c11
)
