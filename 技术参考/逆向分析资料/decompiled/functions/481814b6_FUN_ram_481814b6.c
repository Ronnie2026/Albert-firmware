/* Firmware entry: 0x481814b6 */

uint FUN_ram_481814b6(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_2a = *(undefined2 *)((int)param_1 + 6);
  uStack_30 = *param_1;
  puStack_28 = &uStack_34;
  uStack_34 = 0;
  uStack_24 = 0x10001;
  uStack_2c = 1;
  iVar1 = FUN_ram_4818023e(&uStack_30,&puStack_28);
  if (iVar1 != 0) {
    uStack_34 = 1;
    iVar1 = FUN_ram_4818023e(&uStack_30,&puStack_28);
    if (iVar1 != 0) {
      uStack_34 = 2;
      iVar1 = FUN_ram_4818023e(&uStack_30,&puStack_28);
      if (iVar1 == 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      uVar2 = FUN_ram_48180e3a(&uStack_30);
      if (uVar2 != 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return uVar2 & -(uint)((int)uVar2 < 1);
      }
      uVar2 = FUN_ram_48180ad6(&uStack_30,param_2,param_3,param_4);
      return uVar2;
    }
  }
  return 0xfffffff2;
}


