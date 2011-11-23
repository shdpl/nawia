
package net.nawia.gsao.content.model.monster;

import java.math.BigInteger;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="defense">
 *   &lt;xs:complexType>
 *     &lt;xs:sequence>
 *       &lt;xs:element ref="attribute" minOccurs="0"/>
 *     &lt;/xs:sequence>
 *     &lt;xs:attribute type="xs:integer" name="speedchange"/>
 *     &lt;xs:attribute type="xs:string" use="required" name="name"/>
 *     &lt;xs:attribute type="xs:string" name="monster"/>
 *     &lt;xs:attribute type="xs:int" name="min"/>
 *     &lt;xs:attribute type="xs:int" name="max"/>
 *     &lt;xs:attribute type="xs:int" name="item"/>
 *     &lt;xs:attribute type="xs:string" use="required" name="interval"/>
 *     &lt;xs:attribute type="xs:anySimpleType" name="duration"/>
 *     &lt;xs:attribute type="xs:string" name="chance"/>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Defense
{
    private Attribute attribute;
    private BigInteger speedchange;
    private String name;
    private String monster;
    private Integer min;
    private Integer max;
    private Integer item;
    private String interval;
    private String duration;
    private String chance;

    /** 
     * Get the 'attribute' element value.
     * 
     * @return value
     */
    public Attribute getAttribute() {
        return attribute;
    }

    /** 
     * Set the 'attribute' element value.
     * 
     * @param attribute
     */
    public void setAttribute(Attribute attribute) {
        this.attribute = attribute;
    }

    /** 
     * Get the 'speedchange' attribute value.
     * 
     * @return value
     */
    public BigInteger getSpeedchange() {
        return speedchange;
    }

    /** 
     * Set the 'speedchange' attribute value.
     * 
     * @param speedchange
     */
    public void setSpeedchange(BigInteger speedchange) {
        this.speedchange = speedchange;
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
     * Get the 'monster' attribute value.
     * 
     * @return value
     */
    public String getMonster() {
        return monster;
    }

    /** 
     * Set the 'monster' attribute value.
     * 
     * @param monster
     */
    public void setMonster(String monster) {
        this.monster = monster;
    }

    /** 
     * Get the 'min' attribute value.
     * 
     * @return value
     */
    public Integer getMin() {
        return min;
    }

    /** 
     * Set the 'min' attribute value.
     * 
     * @param min
     */
    public void setMin(Integer min) {
        this.min = min;
    }

    /** 
     * Get the 'max' attribute value.
     * 
     * @return value
     */
    public Integer getMax() {
        return max;
    }

    /** 
     * Set the 'max' attribute value.
     * 
     * @param max
     */
    public void setMax(Integer max) {
        this.max = max;
    }

    /** 
     * Get the 'item' attribute value. lookTypeEx ID
     * 
     * @return value
     */
    public Integer getItem() {
        return item;
    }

    /** 
     * Set the 'item' attribute value. lookTypeEx ID
     * 
     * @param item
     */
    public void setItem(Integer item) {
        this.item = item;
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
     * Get the 'duration' attribute value.
     * 
     * @return value
     */
    public String getDuration() {
        return duration;
    }

    /** 
     * Set the 'duration' attribute value.
     * 
     * @param duration
     */
    public void setDuration(String duration) {
        this.duration = duration;
    }

    /** 
     * Get the 'chance' attribute value.
     * 
     * @return value
     */
    public String getChance() {
        return chance;
    }

    /** 
     * Set the 'chance' attribute value.
     * 
     * @param chance
     */
    public void setChance(String chance) {
        this.chance = chance;
    }
}
