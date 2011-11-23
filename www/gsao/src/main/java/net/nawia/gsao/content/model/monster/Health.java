
package net.nawia.gsao.content.model.monster;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="health">
 *   &lt;xs:complexType>
 *     &lt;xs:attribute type="xs:int" use="required" name="now"/>
 *     &lt;xs:attribute type="xs:int" use="required" name="max"/>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Health
{
    private int now;
    private int max;

    /** 
     * Get the 'now' attribute value.
     * 
     * @return value
     */
    public int getNow() {
        return now;
    }

    /** 
     * Set the 'now' attribute value.
     * 
     * @param now
     */
    public void setNow(int now) {
        this.now = now;
    }

    /** 
     * Get the 'max' attribute value.
     * 
     * @return value
     */
    public int getMax() {
        return max;
    }

    /** 
     * Set the 'max' attribute value.
     * 
     * @param max
     */
    public void setMax(int max) {
        this.max = max;
    }
}
