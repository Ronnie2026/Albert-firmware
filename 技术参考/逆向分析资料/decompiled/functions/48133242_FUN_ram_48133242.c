/* Firmware entry: 0x48133242 */

undefined4 FUN_ram_48133242(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined1 *)0x0) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"system_api","E (%lu) %s: mac address param is NULL\n",uVar4,"system_api");
    return 0x102;
  }
  iVar2 = FUN_ram_48132fba(param_2);
  if (iVar2 == -1) {
    return 0x106;
  }
  iVar3 = FUN_ram_481330ca(param_1,iVar2,1);
  if (iVar3 != 0) {
    uVar4 = FUN_ram_48132fba(5);
    iVar3 = FUN_ram_481330ca(&uStack_28,uVar4,0);
    if (iVar3 != 0) {
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"system_api","E (%lu) %s: Error reading BASE MAC address\n",uVar4,
                       "system_api");
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffffffff;
    }
    if (param_2 != 3) {
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"system_api","E (%lu) %s: unsupported mac type\n",uVar4,"system_api");
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"system_api","E (%lu) %s: MAC address generation error\n",uVar4,
                       "system_api");
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0x106;
    }
    param_1[2] = uStack_26;
    *param_1 = uStack_28;
    param_1[1] = uStack_27;
    param_1[3] = uStack_25;
    param_1[4] = uStack_24;
    param_1[5] = uStack_23;
    uVar1 = *(undefined1 *)((int)&DAT_ram_4ff4b9a4 + iVar2 * 8 + 1);
    *(byte *)(&DAT_ram_4ff4b9a4 + iVar2 * 2) = *(byte *)(&DAT_ram_4ff4b9a4 + iVar2 * 2) & 0xf | 0x10
    ;
    FUN_ram_4ff45158(iVar2 * 8 + 0x4ff4b9a6,param_1,uVar1);
  }
  return 0;
}


