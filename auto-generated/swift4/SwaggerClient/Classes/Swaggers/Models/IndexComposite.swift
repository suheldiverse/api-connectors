//
// IndexComposite.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation



public struct IndexComposite: Codable {

    public var timestamp: Date
    public var symbol: String?
    public var indexSymbol: String?
    public var reference: String?
    public var lastPrice: Double?
    public var weight: Double?
    public var logged: Date?

    public init(timestamp: Date, symbol: String?, indexSymbol: String?, reference: String?, lastPrice: Double?, weight: Double?, logged: Date?) {
        self.timestamp = timestamp
        self.symbol = symbol
        self.indexSymbol = indexSymbol
        self.reference = reference
        self.lastPrice = lastPrice
        self.weight = weight
        self.logged = logged
    }


}
