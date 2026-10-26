/* Firmware entry: 0x481a4282 */

undefined4 FUN_ram_481a4282(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"event","E (%lu) %s: event_loop_args was NULL\n",uVar3,"event");
    return 0x102;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"event","E (%lu) %s: event_loop was NULL\n",uVar3,"event");
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0x102;
  }
  puVar1 = (undefined4 *)FUN_ram_4ff45080(1,0x18);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"event","E (%lu) %s: alloc for event loop failed\n",uVar3,"event");
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0x101;
  }
  iVar2 = FUN_ram_4ff3add0(*param_1,0x10,0);
  puVar1[1] = iVar2;
  if (iVar2 == 0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"event","E (%lu) %s: create event loop queue failed\n",uVar3,"event");
  }
  else {
    iVar2 = FUN_ram_4ff3b144(4);
    puVar1[4] = iVar2;
    if (iVar2 != 0) {
      iVar2 = param_1[1];
      puVar1[5] = 0;
      if (iVar2 == 0) {
        puVar1[2] = 0;
        *puVar1 = &DAT_ram_481df390;
LAB_ram_481a4300:
        *param_2 = puVar1;
        puVar1[3] = 0;
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      iVar2 = FUN_ram_4ff3e458(&LAB_ram_481a4706,iVar2,param_1[3],puVar1,param_1[2],puVar1 + 2,
                               param_1[4]);
      if (iVar2 == 1) {
        *puVar1 = param_1[1];
        goto LAB_ram_481a4300;
      }
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"event","E (%lu) %s: create task for loop failed\n",uVar3,"event");
      uVar3 = 0xffffffff;
      goto LAB_ram_481a4354;
    }
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"event","E (%lu) %s: create event loop mutex failed\n",uVar3,"event");
  }
  uVar3 = 0x101;
LAB_ram_481a4354:
  if (puVar1[1] != 0) {
    FUN_ram_4ff3ba8e();
  }
  if (puVar1[4] != 0) {
    FUN_ram_4ff3ba8e();
  }
  thunk_FUN_ram_4ff209c6(puVar1);
  return uVar3;
}


