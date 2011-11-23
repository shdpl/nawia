
package net.nawia.gsao.content.model.monster;

import java.math.BigInteger;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="item">
 *   &lt;xs:complexType mixed="true">
 *     &lt;xs:sequence>
 *       &lt;xs:element ref="inside" minOccurs="0"/>
 *     &lt;/xs:sequence>
 *     &lt;xs:attribute type="xs:integer" name="id"/>
 *     &lt;xs:attribute type="xs:int" name="countmax"/>
 *     &lt;xs:attribute name="chancemax">
 *       &lt;xs:simpleType>
 *         &lt;!-- Reference to inner class Chancemax -->
 *       &lt;/xs:simpleType>
 *     &lt;/xs:attribute>
 *     &lt;xs:attribute type="xs:int" name="chance"/>
 *     &lt;xs:attribute type="xs:int" name="chance1"/>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Item
{
    private Inside inside;
    private BigInteger id;
    private Integer countmax;
    private Chancemax chancemax;
    private Integer chance;
    private Integer chance1;

    /** 
     * Get the 'inside' element value.
     * 
     * @return value
     */
    public Inside getInside() {
        return inside;
    }

    /** 
     * Set the 'inside' element value.
     * 
     * @param inside
     */
    public void setInside(Inside inside) {
        this.inside = inside;
    }

    /** 
     * Get the 'id' attribute value. Item ID
     * 
     * @return value
     */
    public BigInteger getId() {
        return id;
    }

    /** 
     * Set the 'id' attribute value. Item ID
     * 
     * @param id
     */
    public void setId(BigInteger id) {
        this.id = id;
    }

    /** 
     * Get the 'countmax' attribute value.
     * 
     * @return value
     */
    public Integer getCountmax() {
        return countmax;
    }

    /** 
     * Set the 'countmax' attribute value.
     * 
     * @param countmax
     */
    public void setCountmax(Integer countmax) {
        this.countmax = countmax;
    }

    /** 
     * Get the 'chancemax' attribute value.
     * 
     * @return value
     */
    public Chancemax getChancemax() {
        return chancemax;
    }

    /** 
     * Set the 'chancemax' attribute value.
     * 
     * @param chancemax
     */
    public void setChancemax(Chancemax chancemax) {
        this.chancemax = chancemax;
    }

    /** 
     * Get the 'chance' attribute value.
     * 
     * @return value
     */
    public Integer getChance() {
        return chance;
    }

    /** 
     * Set the 'chance' attribute value.
     * 
     * @param chance
     */
    public void setChance(Integer chance) {
        this.chance = chance;
    }

    /** 
     * Get the 'chance1' attribute value. deprecated, use chance instead
     * 
     * @return value
     */
    public Integer getChance1() {
        return chance1;
    }

    /** 
     * Set the 'chance1' attribute value. deprecated, use chance instead
     * 
     * @param chance1
     */
    public void setChance1(Integer chance1) {
        this.chance1 = chance1;
    }
    /** 
     * Schema fragment(s) for this class:
     * <pre>
     * &lt;xs:simpleType xmlns:xs="http://www.w3.org/2001/XMLSchema">
     *   &lt;xs:restriction base="xs:byte">
     *     &lt;xs:enumeration value="0"/>
     *   &lt;/xs:restriction>
     * &lt;/xs:simpleType>
     * </pre>
     */
    public static enum Chancemax {
        _0("0");
        private final String value;

        private Chancemax(String value) {
            this.value = value;
        }

        public String xmlValue() {
            return value;
        }

        public static Chancemax convert(String value) {
            for (Chancemax inst : values()) {
                if (inst.xmlValue().equals(value)) {
                    return inst;
                }
            }
            return null;
        }
    }
}
