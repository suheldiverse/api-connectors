//
// ModelError.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation



public struct ModelError: Codable {

    public var error: ErrorError

    public init(error: ErrorError) {
        self.error = error
    }


}
