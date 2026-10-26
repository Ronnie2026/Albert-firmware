/* Firmware entry: 0x4812d072 */

int FUN_ram_4812d072(int param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_118 [272];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(uint *)(param_2 + 4) & 0xfffffffd) == 0) {
    uStack_11c = *(undefined4 *)(param_1 + 0x10);
    uStack_120 = *(undefined4 *)(param_1 + 0xc);
    iVar1 = thunk_FUN_ram_4812f3b2(0,&uStack_120,auStack_118);
    if (iVar1 != 0) {
      return 0x1503;
    }
  }
  else if (*(uint *)(param_2 + 4) == 3) {
    uStack_124 = 0;
    iVar1 = FUN_ram_4812e68a(param_1,0,0xc00,0,&uStack_124,&uStack_120);
    if (iVar1 != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar1;
    }
    iVar1 = FUN_ram_4812ee14(uStack_124,1,auStack_118);
    if (iVar1 == 0) {
      thunk_FUN_ram_4812fb50(uStack_120);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    thunk_FUN_ram_4812fb50(uStack_120);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0x1503;
  }
  return 0;
}


