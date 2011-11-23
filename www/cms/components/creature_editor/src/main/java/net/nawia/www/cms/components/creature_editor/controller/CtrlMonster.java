package net.nawia.www.cms.components.creature_editor.controller;

import java.util.SortedSet;

import net.nawia.gsao.model.world.entity.Monster;
import net.nawia.gsao.content.model.Category;
import net.nawia.gsao.content.service.ServiceMonster;

import org.zkoss.zk.ui.Component;
import org.zkoss.zk.ui.util.GenericForwardComposer;
import org.zkoss.zul.ListModelList;
import org.zkoss.zul.api.Combobox;
import org.zkoss.zul.api.Tree;

import javax.annotation.Resource;

public class CtrlMonster extends GenericForwardComposer {
	private static final long serialVersionUID = -3061306803332311013L;

	@Resource
	ServiceMonster monsters;
	
	Combobox search;
	Tree monsterTree;
	
	@Override
	public void doBeforeComposeChildren(Component comp) throws Exception {
		super.doBeforeComposeChildren(comp);
		buildMonsterTree();
	}
	
	public void onFocus$search() {
		SortedSet<Object> to_check = monsters.getChilds(null);
		ListModelList model = new ListModelList();
		boolean all = false;
		while(!all) {
			all = true;
			for(Object obj : to_check) {
				to_check.remove(obj);
				if (obj instanceof Monster) {
					model.add(obj);
				} else {	// Category<Monster>
					to_check.addAll(monsters.getChilds((Category<Monster>)obj));
					all = false;
				}
			}
		}
		search.setModel(model);
	}
	
	private void buildMonsterTree() {
		SortedSet<Object> to_check = monsters.getChilds(null);
		boolean all = false;
		while(!all) {
			all = true;
			for(Object obj : to_check) {
				to_check.remove(obj);
				if (obj instanceof Monster) {
					model.add(obj);
				} else {	// Category<Monster>
					to_check.addAll(monsters.getChilds((Category<Monster>)obj));
					all = false;
				}
			}
		}
	}
	
	
}
