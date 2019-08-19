/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)    #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  *All* table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  *This is only a small subset of what is available, to get you started.*  Fill in the parameters and click the `Try it out!` button to try any of these queries.  * [Pricing Data](#!/Quote/Quote_get)  * [Trade Data](#!/Trade/Trade_get)  * [OrderBook Data](#!/OrderBook/OrderBook_getL2)  * [Settlement Data](#!/Settlement/Settlement_get)  * [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)    ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "Settlement.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Settlement::Settlement()
{
    m_Timestamp = utility::datetime();
    m_Symbol = utility::conversions::to_string_t("");
    m_SettlementType = utility::conversions::to_string_t("");
    m_SettlementTypeIsSet = false;
    m_SettledPrice = 0.0;
    m_SettledPriceIsSet = false;
    m_OptionStrikePrice = 0.0;
    m_OptionStrikePriceIsSet = false;
    m_OptionUnderlyingPrice = 0.0;
    m_OptionUnderlyingPriceIsSet = false;
    m_Bankrupt = 0.0;
    m_BankruptIsSet = false;
    m_TaxBase = 0.0;
    m_TaxBaseIsSet = false;
    m_TaxRate = 0.0;
    m_TaxRateIsSet = false;
}

Settlement::~Settlement()
{
}

void Settlement::validate()
{
    // TODO: implement validation
}

web::json::value Settlement::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(m_Timestamp);
    val[utility::conversions::to_string_t("symbol")] = ModelBase::toJson(m_Symbol);
    if(m_SettlementTypeIsSet)
    {
        val[utility::conversions::to_string_t("settlementType")] = ModelBase::toJson(m_SettlementType);
    }
    if(m_SettledPriceIsSet)
    {
        val[utility::conversions::to_string_t("settledPrice")] = ModelBase::toJson(m_SettledPrice);
    }
    if(m_OptionStrikePriceIsSet)
    {
        val[utility::conversions::to_string_t("optionStrikePrice")] = ModelBase::toJson(m_OptionStrikePrice);
    }
    if(m_OptionUnderlyingPriceIsSet)
    {
        val[utility::conversions::to_string_t("optionUnderlyingPrice")] = ModelBase::toJson(m_OptionUnderlyingPrice);
    }
    if(m_BankruptIsSet)
    {
        val[utility::conversions::to_string_t("bankrupt")] = ModelBase::toJson(m_Bankrupt);
    }
    if(m_TaxBaseIsSet)
    {
        val[utility::conversions::to_string_t("taxBase")] = ModelBase::toJson(m_TaxBase);
    }
    if(m_TaxRateIsSet)
    {
        val[utility::conversions::to_string_t("taxRate")] = ModelBase::toJson(m_TaxRate);
    }

    return val;
}

void Settlement::fromJson(web::json::value& val)
{
    setTimestamp
    (ModelBase::dateFromJson(val[utility::conversions::to_string_t("timestamp")]));
    setSymbol(ModelBase::stringFromJson(val[utility::conversions::to_string_t("symbol")]));
    if(val.has_field(utility::conversions::to_string_t("settlementType")))
    {
        setSettlementType(ModelBase::stringFromJson(val[utility::conversions::to_string_t("settlementType")]));
    }
    if(val.has_field(utility::conversions::to_string_t("settledPrice")))
    {
        setSettledPrice(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("settledPrice")]));
    }
    if(val.has_field(utility::conversions::to_string_t("optionStrikePrice")))
    {
        setOptionStrikePrice(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("optionStrikePrice")]));
    }
    if(val.has_field(utility::conversions::to_string_t("optionUnderlyingPrice")))
    {
        setOptionUnderlyingPrice(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("optionUnderlyingPrice")]));
    }
    if(val.has_field(utility::conversions::to_string_t("bankrupt")))
    {
        setBankrupt(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("bankrupt")]));
    }
    if(val.has_field(utility::conversions::to_string_t("taxBase")))
    {
        setTaxBase(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("taxBase")]));
    }
    if(val.has_field(utility::conversions::to_string_t("taxRate")))
    {
        setTaxRate(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("taxRate")]));
    }
}

void Settlement::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timestamp"), m_Timestamp));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("symbol"), m_Symbol));
    if(m_SettlementTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("settlementType"), m_SettlementType));
        
    }
    if(m_SettledPriceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("settledPrice"), m_SettledPrice));
    }
    if(m_OptionStrikePriceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("optionStrikePrice"), m_OptionStrikePrice));
    }
    if(m_OptionUnderlyingPriceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("optionUnderlyingPrice"), m_OptionUnderlyingPrice));
    }
    if(m_BankruptIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bankrupt"), m_Bankrupt));
    }
    if(m_TaxBaseIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("taxBase"), m_TaxBase));
    }
    if(m_TaxRateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("taxRate"), m_TaxRate));
    }
}

void Settlement::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setTimestamp(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timestamp"))));
    setSymbol(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("symbol"))));
    if(multipart->hasContent(utility::conversions::to_string_t("settlementType")))
    {
        setSettlementType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("settlementType"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("settledPrice")))
    {
        setSettledPrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("settledPrice"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("optionStrikePrice")))
    {
        setOptionStrikePrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("optionStrikePrice"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("optionUnderlyingPrice")))
    {
        setOptionUnderlyingPrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("optionUnderlyingPrice"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bankrupt")))
    {
        setBankrupt(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("bankrupt"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("taxBase")))
    {
        setTaxBase(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("taxBase"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("taxRate")))
    {
        setTaxRate(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("taxRate"))));
    }
}

utility::datetime Settlement::getTimestamp() const
{
    return m_Timestamp;
}


void Settlement::setTimestamp(utility::datetime value)
{
    m_Timestamp = value;
    
}
utility::string_t Settlement::getSymbol() const
{
    return m_Symbol;
}


void Settlement::setSymbol(utility::string_t value)
{
    m_Symbol = value;
    
}
utility::string_t Settlement::getSettlementType() const
{
    return m_SettlementType;
}


void Settlement::setSettlementType(utility::string_t value)
{
    m_SettlementType = value;
    m_SettlementTypeIsSet = true;
}
bool Settlement::settlementTypeIsSet() const
{
    return m_SettlementTypeIsSet;
}

void Settlement::unsetSettlementType()
{
    m_SettlementTypeIsSet = false;
}

double Settlement::getSettledPrice() const
{
    return m_SettledPrice;
}


void Settlement::setSettledPrice(double value)
{
    m_SettledPrice = value;
    m_SettledPriceIsSet = true;
}
bool Settlement::settledPriceIsSet() const
{
    return m_SettledPriceIsSet;
}

void Settlement::unsetSettledPrice()
{
    m_SettledPriceIsSet = false;
}

double Settlement::getOptionStrikePrice() const
{
    return m_OptionStrikePrice;
}


void Settlement::setOptionStrikePrice(double value)
{
    m_OptionStrikePrice = value;
    m_OptionStrikePriceIsSet = true;
}
bool Settlement::optionStrikePriceIsSet() const
{
    return m_OptionStrikePriceIsSet;
}

void Settlement::unsetOptionStrikePrice()
{
    m_OptionStrikePriceIsSet = false;
}

double Settlement::getOptionUnderlyingPrice() const
{
    return m_OptionUnderlyingPrice;
}


void Settlement::setOptionUnderlyingPrice(double value)
{
    m_OptionUnderlyingPrice = value;
    m_OptionUnderlyingPriceIsSet = true;
}
bool Settlement::optionUnderlyingPriceIsSet() const
{
    return m_OptionUnderlyingPriceIsSet;
}

void Settlement::unsetOptionUnderlyingPrice()
{
    m_OptionUnderlyingPriceIsSet = false;
}

double Settlement::getBankrupt() const
{
    return m_Bankrupt;
}


void Settlement::setBankrupt(double value)
{
    m_Bankrupt = value;
    m_BankruptIsSet = true;
}
bool Settlement::bankruptIsSet() const
{
    return m_BankruptIsSet;
}

void Settlement::unsetBankrupt()
{
    m_BankruptIsSet = false;
}

double Settlement::getTaxBase() const
{
    return m_TaxBase;
}


void Settlement::setTaxBase(double value)
{
    m_TaxBase = value;
    m_TaxBaseIsSet = true;
}
bool Settlement::taxBaseIsSet() const
{
    return m_TaxBaseIsSet;
}

void Settlement::unsetTaxBase()
{
    m_TaxBaseIsSet = false;
}

double Settlement::getTaxRate() const
{
    return m_TaxRate;
}


void Settlement::setTaxRate(double value)
{
    m_TaxRate = value;
    m_TaxRateIsSet = true;
}
bool Settlement::taxRateIsSet() const
{
    return m_TaxRateIsSet;
}

void Settlement::unsetTaxRate()
{
    m_TaxRateIsSet = false;
}

}
}
}
}

