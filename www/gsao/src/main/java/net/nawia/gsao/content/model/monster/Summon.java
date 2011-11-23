
package net.nawia.gsao.content.model.monster;

import java.math.BigInteger;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="summon">
 *   &lt;xs:complexType>
 *     &lt;xs:attribute type="xs:string" name="speed"/>
 *     &lt;xs:attribute type="xs:string" use="required" name="name"/>
 *     &lt;xs:attribute type="xs:integer" name="max"/>
 *     &lt;xs:attribute type="xs:string" name="interval"/>
 *     &lt;xs:attribute type="xs:integer" name="chance"/>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Summon
{
    private String speed;
    private String name;
    private BigInteger max;
    private String interval;
    private BigInteger chance;

    /** 
     * Get the 'speed' attribute value. Deprecated, use interval instead. If both used,
    					only last one is stored.
    				
     * 
     * @return value
     */
    public String getSpeed() {
        return speed;
    }

    /** 
     * Set the 'speed' attribute value. Deprecated, use interval instead. If both used,
    					only last one is stored.
    				
     * 
     * @param speed
     */
    public void setSpeed(String speed) {
        this.speed = speed;
    }

    /** 
     * Get the 'name' attribute value.
     * 
     * @return value
     */
    public String getName() {
        return name;
    }

    /** 
     * Set the 'name' attribute value.
     * 
     * @param name
     */
    public void setName(String name) {
        this.name = name;
    }

    /** 
     * Get the 'max' attribute value.
     * 
     * @return value
     */
    public BigInteger getMax() {
        return max;
    }

    /** 
     * Set the 'max' attribute value.
     * 
     * @param max
     */
    public void setMax(BigInteger max) {
        this.max = max;
    }

    /** 
     * Get the 'interval' attribute value.
     * 
     * @return value
     */
    public String getInterval() {
        return interval;
    }

    /** 
     * Set the 'interval' attribute value.
     * 
     * @param interval
     */
    public void setInterval(String interval) {
        this.interval = interval;
    }

    /** 
     * Get the 'chance' attribute value.
     * 
     * @return value
     */
    public BigInteger getChance() {
        return chance;
    }

    /** 
     * Set the 'chance' attribute value.
     * 
     * @param chance
     */
    public void setChance(BigInteger chance) {
        this.chance = chance;
    }
}
