
package net.nawia.gsao.content.model.monster;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="voice">
 *   &lt;xs:complexType>
 *     &lt;xs:attribute type="xs:boolean" name="yell"/>
 *     &lt;xs:attribute type="xs:string" use="required" name="sentence"/>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Voice
{
    private Boolean yell;
    private String sentence;

    /** 
     * Get the 'yell' attribute value.
     * 
     * @return value
     */
    public Boolean getYell() {
        return yell;
    }

    /** 
     * Set the 'yell' attribute value.
     * 
     * @param yell
     */
    public void setYell(Boolean yell) {
        this.yell = yell;
    }

    /** 
     * Get the 'sentence' attribute value.
     * 
     * @return value
     */
    public String getSentence() {
        return sentence;
    }

    /** 
     * Set the 'sentence' attribute value.
     * 
     * @param sentence
     */
    public void setSentence(String sentence) {
        this.sentence = sentence;
    }
}
