package net.nawia.www.cms.components.creature_editor.renderer;

import org.zkoss.zul.Treeitem;
import org.zkoss.zul.TreeitemRenderer;

public class MonsterCategoryRenderer implements TreeitemRenderer {

	@Override
	public void render(Treeitem parent, Object data) throws Exception {
		MonsterCategory mc = (MonsterCategory) data.getData();
		Treerow row = new Treerow();
		parent.appendChild(row);
	}

}
