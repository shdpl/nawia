
package net.nawia.gsao.content.model.monster;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="event">
 *   &lt;xs:complexType>
 *     &lt;xs:attribute type="xs:string" name="name"/>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Event
{
    private String name;

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
}
