
package net.nawia.gsao.content.model.monster;

import java.math.BigInteger;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="look">
 *   &lt;xs:complexType>
 *     &lt;xs:attribute type="xs:integer" name="type"/>
 *     &lt;xs:attribute type="xs:int" name="head"/>
 *     &lt;xs:attribute type="xs:int" name="body"/>
 *     &lt;xs:attribute type="xs:int" name="legs"/>
 *     &lt;xs:attribute type="xs:int" name="feet"/>
 *     &lt;xs:attribute type="xs:int" name="addons"/>
 *     &lt;xs:attribute type="xs:int" name="typeex"/>
 *     &lt;xs:attribute type="xs:short" name="corpse"/>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Look
{
    private BigInteger type;
    private Integer head;
    private Integer body;
    private Integer legs;
    private Integer feet;
    private Integer addons;
    private Integer typeex;
    private Short corpse;

    /** 
     * Get the 'type' attribute value. If type is used, You need to fill head, body,
    					legs, feet and addons. You cannot use typeex (use type OR
    					typeex,
    					not both).
    				
     * 
     * @return value
     */
    public BigInteger getType() {
        return type;
    }

    /** 
     * Set the 'type' attribute value. If type is used, You need to fill head, body,
    					legs, feet and addons. You cannot use typeex (use type OR
    					typeex,
    					not both).
    				
     * 
     * @param type
     */
    public void setType(BigInteger type) {
        this.type = type;
    }

    /** 
     * Get the 'head' attribute value.
     * 
     * @return value
     */
    public Integer getHead() {
        return head;
    }

    /** 
     * Set the 'head' attribute value.
     * 
     * @param head
     */
    public void setHead(Integer head) {
        this.head = head;
    }

    /** 
     * Get the 'body' attribute value.
     * 
     * @return value
     */
    public Integer getBody() {
        return body;
    }

    /** 
     * Set the 'body' attribute value.
     * 
     * @param body
     */
    public void setBody(Integer body) {
        this.body = body;
    }

    /** 
     * Get the 'legs' attribute value.
     * 
     * @return value
     */
    public Integer getLegs() {
        return legs;
    }

    /** 
     * Set the 'legs' attribute value.
     * 
     * @param legs
     */
    public void setLegs(Integer legs) {
        this.legs = legs;
    }

    /** 
     * Get the 'feet' attribute value.
     * 
     * @return value
     */
    public Integer getFeet() {
        return feet;
    }

    /** 
     * Set the 'feet' attribute value.
     * 
     * @param feet
     */
    public void setFeet(Integer feet) {
        this.feet = feet;
    }

    /** 
     * Get the 'addons' attribute value.
     * 
     * @return value
     */
    public Integer getAddons() {
        return addons;
    }

    /** 
     * Set the 'addons' attribute value.
     * 
     * @param addons
     */
    public void setAddons(Integer addons) {
        this.addons = addons;
    }

    /** 
     * Get the 'typeex' attribute value. If typeex used, you cannot use type.
    				
     * 
     * @return value
     */
    public Integer getTypeex() {
        return typeex;
    }

    /** 
     * Set the 'typeex' attribute value. If typeex used, you cannot use type.
    				
     * 
     * @param typeex
     */
    public void setTypeex(Integer typeex) {
        this.typeex = typeex;
    }

    /** 
     * Get the 'corpse' attribute value.
     * 
     * @return value
     */
    public Short getCorpse() {
        return corpse;
    }

    /** 
     * Set the 'corpse' attribute value.
     * 
     * @param corpse
     */
    public void setCorpse(Short corpse) {
        this.corpse = corpse;
    }
}
