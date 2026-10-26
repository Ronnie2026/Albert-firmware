/* Firmware entry: 0x4802e8fc */

undefined4 FUN_ram_4802e8fc(void)

{
  int iVar1;
  uint uStack_18;
  uint auStack_14 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_18 = 0;
  iVar1 = thunk_FUN_ram_4800f5ac(&uStack_18);
  if (iVar1 == 0) {
    if ((uStack_18 & 2) != 0) {
      iVar1 = FUN_ram_4812458e(&DAT_ram_4ff6c118,0);
      if (iVar1 == 0) {
LAB_ram_4802e97e:
        FUN_ram_4802ad46(&DAT_ram_4ff5c664,"ap_disable_failed");
        return 0;
      }
      auStack_14[0] = 0;
      iVar1 = thunk_FUN_ram_4800f5ac(auStack_14);
      if (iVar1 == 0x3001) {
        if ((uStack_18 & 1) != 0) goto LAB_ram_4802e97e;
      }
      else if ((auStack_14[0] & 2) != 0 || iVar1 != 0) goto LAB_ram_4802e97e;
    }
  }
  else if (iVar1 != 0x3001) goto LAB_ram_4802e97e;
  DAT_ram_4ff5c5f7 = 0;
  DAT_ram_4ff6dd8c = 0;
  iVar1 = FUN_ram_4802b18e(&DAT_ram_4ff5c664,"ap_disable_failed");
  if (iVar1 != 0) {
    FUN_ram_4802ad46(&DAT_ram_4ff5c664,&DAT_ram_481df390);
  }
  return 1;
}


