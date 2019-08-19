<?php
/**
 * StatsUSD
 *
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Client
 * @author   Swagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */

/**
 * BitMEX API
 *
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)    #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  *All* table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  *This is only a small subset of what is available, to get you started.*  Fill in the parameters and click the `Try it out!` button to try any of these queries.  * [Pricing Data](#!/Quote/Quote_get)  * [Trade Data](#!/Trade/Trade_get)  * [OrderBook Data](#!/OrderBook/OrderBook_getL2)  * [Settlement Data](#!/Settlement/Settlement_get)  * [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)    ## All API Endpoints  Click to expand a section.
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 * Swagger Codegen version: 2.4.0-SNAPSHOT
 */

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

namespace Swagger\Client\Model;

use \ArrayAccess;
use \Swagger\Client\ObjectSerializer;

/**
 * StatsUSD Class Doc Comment
 *
 * @category Class
 * @package  Swagger\Client
 * @author   Swagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */
class StatsUSD implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $swaggerModelName = 'StatsUSD';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $swaggerTypes = [
        'root_symbol' => 'string',
        'currency' => 'string',
        'turnover24h' => 'float',
        'turnover30d' => 'float',
        'turnover365d' => 'float',
        'turnover' => 'float'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $swaggerFormats = [
        'root_symbol' => null,
        'currency' => null,
        'turnover24h' => 'int64',
        'turnover30d' => 'int64',
        'turnover365d' => 'int64',
        'turnover' => 'int64'
    ];

    /**
     * Array of property to type mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function swaggerTypes()
    {
        return self::$swaggerTypes;
    }

    /**
     * Array of property to format mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function swaggerFormats()
    {
        return self::$swaggerFormats;
    }

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @var string[]
     */
    protected static $attributeMap = [
        'root_symbol' => 'rootSymbol',
        'currency' => 'currency',
        'turnover24h' => 'turnover24h',
        'turnover30d' => 'turnover30d',
        'turnover365d' => 'turnover365d',
        'turnover' => 'turnover'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'root_symbol' => 'setRootSymbol',
        'currency' => 'setCurrency',
        'turnover24h' => 'setTurnover24h',
        'turnover30d' => 'setTurnover30d',
        'turnover365d' => 'setTurnover365d',
        'turnover' => 'setTurnover'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'root_symbol' => 'getRootSymbol',
        'currency' => 'getCurrency',
        'turnover24h' => 'getTurnover24h',
        'turnover30d' => 'getTurnover30d',
        'turnover365d' => 'getTurnover365d',
        'turnover' => 'getTurnover'
    ];

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @return array
     */
    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @return array
     */
    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @return array
     */
    public static function getters()
    {
        return self::$getters;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function getModelName()
    {
        return self::$swaggerModelName;
    }

    

    

    /**
     * Associative array for storing property values
     *
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     *
     * @param mixed[] $data Associated array of property values
     *                      initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['root_symbol'] = isset($data['root_symbol']) ? $data['root_symbol'] : null;
        $this->container['currency'] = isset($data['currency']) ? $data['currency'] : null;
        $this->container['turnover24h'] = isset($data['turnover24h']) ? $data['turnover24h'] : null;
        $this->container['turnover30d'] = isset($data['turnover30d']) ? $data['turnover30d'] : null;
        $this->container['turnover365d'] = isset($data['turnover365d']) ? $data['turnover365d'] : null;
        $this->container['turnover'] = isset($data['turnover']) ? $data['turnover'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['root_symbol'] === null) {
            $invalidProperties[] = "'root_symbol' can't be null";
        }
        return $invalidProperties;
    }

    /**
     * Validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {
        return count($this->listInvalidProperties()) === 0;
    }


    /**
     * Gets root_symbol
     *
     * @return string
     */
    public function getRootSymbol()
    {
        return $this->container['root_symbol'];
    }

    /**
     * Sets root_symbol
     *
     * @param string $root_symbol root_symbol
     *
     * @return $this
     */
    public function setRootSymbol($root_symbol)
    {
        $this->container['root_symbol'] = $root_symbol;

        return $this;
    }

    /**
     * Gets currency
     *
     * @return string
     */
    public function getCurrency()
    {
        return $this->container['currency'];
    }

    /**
     * Sets currency
     *
     * @param string $currency currency
     *
     * @return $this
     */
    public function setCurrency($currency)
    {
        $this->container['currency'] = $currency;

        return $this;
    }

    /**
     * Gets turnover24h
     *
     * @return float
     */
    public function getTurnover24h()
    {
        return $this->container['turnover24h'];
    }

    /**
     * Sets turnover24h
     *
     * @param float $turnover24h turnover24h
     *
     * @return $this
     */
    public function setTurnover24h($turnover24h)
    {
        $this->container['turnover24h'] = $turnover24h;

        return $this;
    }

    /**
     * Gets turnover30d
     *
     * @return float
     */
    public function getTurnover30d()
    {
        return $this->container['turnover30d'];
    }

    /**
     * Sets turnover30d
     *
     * @param float $turnover30d turnover30d
     *
     * @return $this
     */
    public function setTurnover30d($turnover30d)
    {
        $this->container['turnover30d'] = $turnover30d;

        return $this;
    }

    /**
     * Gets turnover365d
     *
     * @return float
     */
    public function getTurnover365d()
    {
        return $this->container['turnover365d'];
    }

    /**
     * Sets turnover365d
     *
     * @param float $turnover365d turnover365d
     *
     * @return $this
     */
    public function setTurnover365d($turnover365d)
    {
        $this->container['turnover365d'] = $turnover365d;

        return $this;
    }

    /**
     * Gets turnover
     *
     * @return float
     */
    public function getTurnover()
    {
        return $this->container['turnover'];
    }

    /**
     * Sets turnover
     *
     * @param float $turnover turnover
     *
     * @return $this
     */
    public function setTurnover($turnover)
    {
        $this->container['turnover'] = $turnover;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     *
     * @param integer $offset Offset
     *
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     *
     * @param integer $offset Offset
     *
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     *
     * @param integer $offset Offset
     * @param mixed   $value  Value to be set
     *
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     *
     * @param integer $offset Offset
     *
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     *
     * @return string
     */
    public function __toString()
    {
        if (defined('JSON_PRETTY_PRINT')) { // use JSON pretty print
            return json_encode(
                ObjectSerializer::sanitizeForSerialization($this),
                JSON_PRETTY_PRINT
            );
        }

        return json_encode(ObjectSerializer::sanitizeForSerialization($this));
    }
}


