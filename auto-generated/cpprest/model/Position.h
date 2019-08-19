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

/*
 * Position.h
 *
 * Summary of Open and Closed Positions
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_Position_H_
#define IO_SWAGGER_CLIENT_MODEL_Position_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Summary of Open and Closed Positions
/// </summary>
class  Position
    : public ModelBase
{
public:
    Position();
    virtual ~Position();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Position members

    /// <summary>
    /// 
    /// </summary>
    double getAccount() const;
        void setAccount(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSymbol() const;
        void setSymbol(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCurrency() const;
        void setCurrency(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUnderlying() const;
    bool underlyingIsSet() const;
    void unsetUnderlying();
    void setUnderlying(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getQuoteCurrency() const;
    bool quoteCurrencyIsSet() const;
    void unsetQuoteCurrency();
    void setQuoteCurrency(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getCommission() const;
    bool commissionIsSet() const;
    void unsetCommission();
    void setCommission(double value);
    /// <summary>
    /// 
    /// </summary>
    double getInitMarginReq() const;
    bool initMarginReqIsSet() const;
    void unsetInitMarginReq();
    void setInitMarginReq(double value);
    /// <summary>
    /// 
    /// </summary>
    double getMaintMarginReq() const;
    bool maintMarginReqIsSet() const;
    void unsetMaintMarginReq();
    void setMaintMarginReq(double value);
    /// <summary>
    /// 
    /// </summary>
    double getRiskLimit() const;
    bool riskLimitIsSet() const;
    void unsetRiskLimit();
    void setRiskLimit(double value);
    /// <summary>
    /// 
    /// </summary>
    double getLeverage() const;
    bool leverageIsSet() const;
    void unsetLeverage();
    void setLeverage(double value);
    /// <summary>
    /// 
    /// </summary>
    bool isCrossMargin() const;
    bool crossMarginIsSet() const;
    void unsetCrossMargin();
    void setCrossMargin(bool value);
    /// <summary>
    /// 
    /// </summary>
    double getDeleveragePercentile() const;
    bool deleveragePercentileIsSet() const;
    void unsetDeleveragePercentile();
    void setDeleveragePercentile(double value);
    /// <summary>
    /// 
    /// </summary>
    double getRebalancedPnl() const;
    bool rebalancedPnlIsSet() const;
    void unsetRebalancedPnl();
    void setRebalancedPnl(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPrevRealisedPnl() const;
    bool prevRealisedPnlIsSet() const;
    void unsetPrevRealisedPnl();
    void setPrevRealisedPnl(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPrevUnrealisedPnl() const;
    bool prevUnrealisedPnlIsSet() const;
    void unsetPrevUnrealisedPnl();
    void setPrevUnrealisedPnl(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPrevClosePrice() const;
    bool prevClosePriceIsSet() const;
    void unsetPrevClosePrice();
    void setPrevClosePrice(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getOpeningTimestamp() const;
    bool openingTimestampIsSet() const;
    void unsetOpeningTimestamp();
    void setOpeningTimestamp(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    double getOpeningQty() const;
    bool openingQtyIsSet() const;
    void unsetOpeningQty();
    void setOpeningQty(double value);
    /// <summary>
    /// 
    /// </summary>
    double getOpeningCost() const;
    bool openingCostIsSet() const;
    void unsetOpeningCost();
    void setOpeningCost(double value);
    /// <summary>
    /// 
    /// </summary>
    double getOpeningComm() const;
    bool openingCommIsSet() const;
    void unsetOpeningComm();
    void setOpeningComm(double value);
    /// <summary>
    /// 
    /// </summary>
    double getOpenOrderBuyQty() const;
    bool openOrderBuyQtyIsSet() const;
    void unsetOpenOrderBuyQty();
    void setOpenOrderBuyQty(double value);
    /// <summary>
    /// 
    /// </summary>
    double getOpenOrderBuyCost() const;
    bool openOrderBuyCostIsSet() const;
    void unsetOpenOrderBuyCost();
    void setOpenOrderBuyCost(double value);
    /// <summary>
    /// 
    /// </summary>
    double getOpenOrderBuyPremium() const;
    bool openOrderBuyPremiumIsSet() const;
    void unsetOpenOrderBuyPremium();
    void setOpenOrderBuyPremium(double value);
    /// <summary>
    /// 
    /// </summary>
    double getOpenOrderSellQty() const;
    bool openOrderSellQtyIsSet() const;
    void unsetOpenOrderSellQty();
    void setOpenOrderSellQty(double value);
    /// <summary>
    /// 
    /// </summary>
    double getOpenOrderSellCost() const;
    bool openOrderSellCostIsSet() const;
    void unsetOpenOrderSellCost();
    void setOpenOrderSellCost(double value);
    /// <summary>
    /// 
    /// </summary>
    double getOpenOrderSellPremium() const;
    bool openOrderSellPremiumIsSet() const;
    void unsetOpenOrderSellPremium();
    void setOpenOrderSellPremium(double value);
    /// <summary>
    /// 
    /// </summary>
    double getExecBuyQty() const;
    bool execBuyQtyIsSet() const;
    void unsetExecBuyQty();
    void setExecBuyQty(double value);
    /// <summary>
    /// 
    /// </summary>
    double getExecBuyCost() const;
    bool execBuyCostIsSet() const;
    void unsetExecBuyCost();
    void setExecBuyCost(double value);
    /// <summary>
    /// 
    /// </summary>
    double getExecSellQty() const;
    bool execSellQtyIsSet() const;
    void unsetExecSellQty();
    void setExecSellQty(double value);
    /// <summary>
    /// 
    /// </summary>
    double getExecSellCost() const;
    bool execSellCostIsSet() const;
    void unsetExecSellCost();
    void setExecSellCost(double value);
    /// <summary>
    /// 
    /// </summary>
    double getExecQty() const;
    bool execQtyIsSet() const;
    void unsetExecQty();
    void setExecQty(double value);
    /// <summary>
    /// 
    /// </summary>
    double getExecCost() const;
    bool execCostIsSet() const;
    void unsetExecCost();
    void setExecCost(double value);
    /// <summary>
    /// 
    /// </summary>
    double getExecComm() const;
    bool execCommIsSet() const;
    void unsetExecComm();
    void setExecComm(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCurrentTimestamp() const;
    bool currentTimestampIsSet() const;
    void unsetCurrentTimestamp();
    void setCurrentTimestamp(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    double getCurrentQty() const;
    bool currentQtyIsSet() const;
    void unsetCurrentQty();
    void setCurrentQty(double value);
    /// <summary>
    /// 
    /// </summary>
    double getCurrentCost() const;
    bool currentCostIsSet() const;
    void unsetCurrentCost();
    void setCurrentCost(double value);
    /// <summary>
    /// 
    /// </summary>
    double getCurrentComm() const;
    bool currentCommIsSet() const;
    void unsetCurrentComm();
    void setCurrentComm(double value);
    /// <summary>
    /// 
    /// </summary>
    double getRealisedCost() const;
    bool realisedCostIsSet() const;
    void unsetRealisedCost();
    void setRealisedCost(double value);
    /// <summary>
    /// 
    /// </summary>
    double getUnrealisedCost() const;
    bool unrealisedCostIsSet() const;
    void unsetUnrealisedCost();
    void setUnrealisedCost(double value);
    /// <summary>
    /// 
    /// </summary>
    double getGrossOpenCost() const;
    bool grossOpenCostIsSet() const;
    void unsetGrossOpenCost();
    void setGrossOpenCost(double value);
    /// <summary>
    /// 
    /// </summary>
    double getGrossOpenPremium() const;
    bool grossOpenPremiumIsSet() const;
    void unsetGrossOpenPremium();
    void setGrossOpenPremium(double value);
    /// <summary>
    /// 
    /// </summary>
    double getGrossExecCost() const;
    bool grossExecCostIsSet() const;
    void unsetGrossExecCost();
    void setGrossExecCost(double value);
    /// <summary>
    /// 
    /// </summary>
    bool isIsOpen() const;
    bool isOpenIsSet() const;
    void unsetIsOpen();
    void setIsOpen(bool value);
    /// <summary>
    /// 
    /// </summary>
    double getMarkPrice() const;
    bool markPriceIsSet() const;
    void unsetMarkPrice();
    void setMarkPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getMarkValue() const;
    bool markValueIsSet() const;
    void unsetMarkValue();
    void setMarkValue(double value);
    /// <summary>
    /// 
    /// </summary>
    double getRiskValue() const;
    bool riskValueIsSet() const;
    void unsetRiskValue();
    void setRiskValue(double value);
    /// <summary>
    /// 
    /// </summary>
    double getHomeNotional() const;
    bool homeNotionalIsSet() const;
    void unsetHomeNotional();
    void setHomeNotional(double value);
    /// <summary>
    /// 
    /// </summary>
    double getForeignNotional() const;
    bool foreignNotionalIsSet() const;
    void unsetForeignNotional();
    void setForeignNotional(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPosState() const;
    bool posStateIsSet() const;
    void unsetPosState();
    void setPosState(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getPosCost() const;
    bool posCostIsSet() const;
    void unsetPosCost();
    void setPosCost(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPosCost2() const;
    bool posCost2IsSet() const;
    void unsetPosCost2();
    void setPosCost2(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPosCross() const;
    bool posCrossIsSet() const;
    void unsetPosCross();
    void setPosCross(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPosInit() const;
    bool posInitIsSet() const;
    void unsetPosInit();
    void setPosInit(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPosComm() const;
    bool posCommIsSet() const;
    void unsetPosComm();
    void setPosComm(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPosLoss() const;
    bool posLossIsSet() const;
    void unsetPosLoss();
    void setPosLoss(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPosMargin() const;
    bool posMarginIsSet() const;
    void unsetPosMargin();
    void setPosMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPosMaint() const;
    bool posMaintIsSet() const;
    void unsetPosMaint();
    void setPosMaint(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPosAllowance() const;
    bool posAllowanceIsSet() const;
    void unsetPosAllowance();
    void setPosAllowance(double value);
    /// <summary>
    /// 
    /// </summary>
    double getTaxableMargin() const;
    bool taxableMarginIsSet() const;
    void unsetTaxableMargin();
    void setTaxableMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getInitMargin() const;
    bool initMarginIsSet() const;
    void unsetInitMargin();
    void setInitMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getMaintMargin() const;
    bool maintMarginIsSet() const;
    void unsetMaintMargin();
    void setMaintMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getSessionMargin() const;
    bool sessionMarginIsSet() const;
    void unsetSessionMargin();
    void setSessionMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getTargetExcessMargin() const;
    bool targetExcessMarginIsSet() const;
    void unsetTargetExcessMargin();
    void setTargetExcessMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getVarMargin() const;
    bool varMarginIsSet() const;
    void unsetVarMargin();
    void setVarMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getRealisedGrossPnl() const;
    bool realisedGrossPnlIsSet() const;
    void unsetRealisedGrossPnl();
    void setRealisedGrossPnl(double value);
    /// <summary>
    /// 
    /// </summary>
    double getRealisedTax() const;
    bool realisedTaxIsSet() const;
    void unsetRealisedTax();
    void setRealisedTax(double value);
    /// <summary>
    /// 
    /// </summary>
    double getRealisedPnl() const;
    bool realisedPnlIsSet() const;
    void unsetRealisedPnl();
    void setRealisedPnl(double value);
    /// <summary>
    /// 
    /// </summary>
    double getUnrealisedGrossPnl() const;
    bool unrealisedGrossPnlIsSet() const;
    void unsetUnrealisedGrossPnl();
    void setUnrealisedGrossPnl(double value);
    /// <summary>
    /// 
    /// </summary>
    double getLongBankrupt() const;
    bool longBankruptIsSet() const;
    void unsetLongBankrupt();
    void setLongBankrupt(double value);
    /// <summary>
    /// 
    /// </summary>
    double getShortBankrupt() const;
    bool shortBankruptIsSet() const;
    void unsetShortBankrupt();
    void setShortBankrupt(double value);
    /// <summary>
    /// 
    /// </summary>
    double getTaxBase() const;
    bool taxBaseIsSet() const;
    void unsetTaxBase();
    void setTaxBase(double value);
    /// <summary>
    /// 
    /// </summary>
    double getIndicativeTaxRate() const;
    bool indicativeTaxRateIsSet() const;
    void unsetIndicativeTaxRate();
    void setIndicativeTaxRate(double value);
    /// <summary>
    /// 
    /// </summary>
    double getIndicativeTax() const;
    bool indicativeTaxIsSet() const;
    void unsetIndicativeTax();
    void setIndicativeTax(double value);
    /// <summary>
    /// 
    /// </summary>
    double getUnrealisedTax() const;
    bool unrealisedTaxIsSet() const;
    void unsetUnrealisedTax();
    void setUnrealisedTax(double value);
    /// <summary>
    /// 
    /// </summary>
    double getUnrealisedPnl() const;
    bool unrealisedPnlIsSet() const;
    void unsetUnrealisedPnl();
    void setUnrealisedPnl(double value);
    /// <summary>
    /// 
    /// </summary>
    double getUnrealisedPnlPcnt() const;
    bool unrealisedPnlPcntIsSet() const;
    void unsetUnrealisedPnlPcnt();
    void setUnrealisedPnlPcnt(double value);
    /// <summary>
    /// 
    /// </summary>
    double getUnrealisedRoePcnt() const;
    bool unrealisedRoePcntIsSet() const;
    void unsetUnrealisedRoePcnt();
    void setUnrealisedRoePcnt(double value);
    /// <summary>
    /// 
    /// </summary>
    double getSimpleQty() const;
    bool simpleQtyIsSet() const;
    void unsetSimpleQty();
    void setSimpleQty(double value);
    /// <summary>
    /// 
    /// </summary>
    double getSimpleCost() const;
    bool simpleCostIsSet() const;
    void unsetSimpleCost();
    void setSimpleCost(double value);
    /// <summary>
    /// 
    /// </summary>
    double getSimpleValue() const;
    bool simpleValueIsSet() const;
    void unsetSimpleValue();
    void setSimpleValue(double value);
    /// <summary>
    /// 
    /// </summary>
    double getSimplePnl() const;
    bool simplePnlIsSet() const;
    void unsetSimplePnl();
    void setSimplePnl(double value);
    /// <summary>
    /// 
    /// </summary>
    double getSimplePnlPcnt() const;
    bool simplePnlPcntIsSet() const;
    void unsetSimplePnlPcnt();
    void setSimplePnlPcnt(double value);
    /// <summary>
    /// 
    /// </summary>
    double getAvgCostPrice() const;
    bool avgCostPriceIsSet() const;
    void unsetAvgCostPrice();
    void setAvgCostPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getAvgEntryPrice() const;
    bool avgEntryPriceIsSet() const;
    void unsetAvgEntryPrice();
    void setAvgEntryPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getBreakEvenPrice() const;
    bool breakEvenPriceIsSet() const;
    void unsetBreakEvenPrice();
    void setBreakEvenPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getMarginCallPrice() const;
    bool marginCallPriceIsSet() const;
    void unsetMarginCallPrice();
    void setMarginCallPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getLiquidationPrice() const;
    bool liquidationPriceIsSet() const;
    void unsetLiquidationPrice();
    void setLiquidationPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getBankruptPrice() const;
    bool bankruptPriceIsSet() const;
    void unsetBankruptPrice();
    void setBankruptPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getTimestamp() const;
    bool timestampIsSet() const;
    void unsetTimestamp();
    void setTimestamp(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    double getLastPrice() const;
    bool lastPriceIsSet() const;
    void unsetLastPrice();
    void setLastPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getLastValue() const;
    bool lastValueIsSet() const;
    void unsetLastValue();
    void setLastValue(double value);

protected:
    double m_Account;
        utility::string_t m_Symbol;
        utility::string_t m_Currency;
        utility::string_t m_Underlying;
    bool m_UnderlyingIsSet;
    utility::string_t m_QuoteCurrency;
    bool m_QuoteCurrencyIsSet;
    double m_Commission;
    bool m_CommissionIsSet;
    double m_InitMarginReq;
    bool m_InitMarginReqIsSet;
    double m_MaintMarginReq;
    bool m_MaintMarginReqIsSet;
    double m_RiskLimit;
    bool m_RiskLimitIsSet;
    double m_Leverage;
    bool m_LeverageIsSet;
    bool m_CrossMargin;
    bool m_CrossMarginIsSet;
    double m_DeleveragePercentile;
    bool m_DeleveragePercentileIsSet;
    double m_RebalancedPnl;
    bool m_RebalancedPnlIsSet;
    double m_PrevRealisedPnl;
    bool m_PrevRealisedPnlIsSet;
    double m_PrevUnrealisedPnl;
    bool m_PrevUnrealisedPnlIsSet;
    double m_PrevClosePrice;
    bool m_PrevClosePriceIsSet;
    utility::datetime m_OpeningTimestamp;
    bool m_OpeningTimestampIsSet;
    double m_OpeningQty;
    bool m_OpeningQtyIsSet;
    double m_OpeningCost;
    bool m_OpeningCostIsSet;
    double m_OpeningComm;
    bool m_OpeningCommIsSet;
    double m_OpenOrderBuyQty;
    bool m_OpenOrderBuyQtyIsSet;
    double m_OpenOrderBuyCost;
    bool m_OpenOrderBuyCostIsSet;
    double m_OpenOrderBuyPremium;
    bool m_OpenOrderBuyPremiumIsSet;
    double m_OpenOrderSellQty;
    bool m_OpenOrderSellQtyIsSet;
    double m_OpenOrderSellCost;
    bool m_OpenOrderSellCostIsSet;
    double m_OpenOrderSellPremium;
    bool m_OpenOrderSellPremiumIsSet;
    double m_ExecBuyQty;
    bool m_ExecBuyQtyIsSet;
    double m_ExecBuyCost;
    bool m_ExecBuyCostIsSet;
    double m_ExecSellQty;
    bool m_ExecSellQtyIsSet;
    double m_ExecSellCost;
    bool m_ExecSellCostIsSet;
    double m_ExecQty;
    bool m_ExecQtyIsSet;
    double m_ExecCost;
    bool m_ExecCostIsSet;
    double m_ExecComm;
    bool m_ExecCommIsSet;
    utility::datetime m_CurrentTimestamp;
    bool m_CurrentTimestampIsSet;
    double m_CurrentQty;
    bool m_CurrentQtyIsSet;
    double m_CurrentCost;
    bool m_CurrentCostIsSet;
    double m_CurrentComm;
    bool m_CurrentCommIsSet;
    double m_RealisedCost;
    bool m_RealisedCostIsSet;
    double m_UnrealisedCost;
    bool m_UnrealisedCostIsSet;
    double m_GrossOpenCost;
    bool m_GrossOpenCostIsSet;
    double m_GrossOpenPremium;
    bool m_GrossOpenPremiumIsSet;
    double m_GrossExecCost;
    bool m_GrossExecCostIsSet;
    bool m_IsOpen;
    bool m_IsOpenIsSet;
    double m_MarkPrice;
    bool m_MarkPriceIsSet;
    double m_MarkValue;
    bool m_MarkValueIsSet;
    double m_RiskValue;
    bool m_RiskValueIsSet;
    double m_HomeNotional;
    bool m_HomeNotionalIsSet;
    double m_ForeignNotional;
    bool m_ForeignNotionalIsSet;
    utility::string_t m_PosState;
    bool m_PosStateIsSet;
    double m_PosCost;
    bool m_PosCostIsSet;
    double m_PosCost2;
    bool m_PosCost2IsSet;
    double m_PosCross;
    bool m_PosCrossIsSet;
    double m_PosInit;
    bool m_PosInitIsSet;
    double m_PosComm;
    bool m_PosCommIsSet;
    double m_PosLoss;
    bool m_PosLossIsSet;
    double m_PosMargin;
    bool m_PosMarginIsSet;
    double m_PosMaint;
    bool m_PosMaintIsSet;
    double m_PosAllowance;
    bool m_PosAllowanceIsSet;
    double m_TaxableMargin;
    bool m_TaxableMarginIsSet;
    double m_InitMargin;
    bool m_InitMarginIsSet;
    double m_MaintMargin;
    bool m_MaintMarginIsSet;
    double m_SessionMargin;
    bool m_SessionMarginIsSet;
    double m_TargetExcessMargin;
    bool m_TargetExcessMarginIsSet;
    double m_VarMargin;
    bool m_VarMarginIsSet;
    double m_RealisedGrossPnl;
    bool m_RealisedGrossPnlIsSet;
    double m_RealisedTax;
    bool m_RealisedTaxIsSet;
    double m_RealisedPnl;
    bool m_RealisedPnlIsSet;
    double m_UnrealisedGrossPnl;
    bool m_UnrealisedGrossPnlIsSet;
    double m_LongBankrupt;
    bool m_LongBankruptIsSet;
    double m_ShortBankrupt;
    bool m_ShortBankruptIsSet;
    double m_TaxBase;
    bool m_TaxBaseIsSet;
    double m_IndicativeTaxRate;
    bool m_IndicativeTaxRateIsSet;
    double m_IndicativeTax;
    bool m_IndicativeTaxIsSet;
    double m_UnrealisedTax;
    bool m_UnrealisedTaxIsSet;
    double m_UnrealisedPnl;
    bool m_UnrealisedPnlIsSet;
    double m_UnrealisedPnlPcnt;
    bool m_UnrealisedPnlPcntIsSet;
    double m_UnrealisedRoePcnt;
    bool m_UnrealisedRoePcntIsSet;
    double m_SimpleQty;
    bool m_SimpleQtyIsSet;
    double m_SimpleCost;
    bool m_SimpleCostIsSet;
    double m_SimpleValue;
    bool m_SimpleValueIsSet;
    double m_SimplePnl;
    bool m_SimplePnlIsSet;
    double m_SimplePnlPcnt;
    bool m_SimplePnlPcntIsSet;
    double m_AvgCostPrice;
    bool m_AvgCostPriceIsSet;
    double m_AvgEntryPrice;
    bool m_AvgEntryPriceIsSet;
    double m_BreakEvenPrice;
    bool m_BreakEvenPriceIsSet;
    double m_MarginCallPrice;
    bool m_MarginCallPriceIsSet;
    double m_LiquidationPrice;
    bool m_LiquidationPriceIsSet;
    double m_BankruptPrice;
    bool m_BankruptPriceIsSet;
    utility::datetime m_Timestamp;
    bool m_TimestampIsSet;
    double m_LastPrice;
    bool m_LastPriceIsSet;
    double m_LastValue;
    bool m_LastValueIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_Position_H_ */
