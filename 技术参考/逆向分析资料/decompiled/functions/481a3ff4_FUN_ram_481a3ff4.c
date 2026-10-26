/* Firmware entry: 0x481a3ff4 */

undefined4
FUN_ram_481a3ff4(int param_1,undefined *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 == &DAT_ram_481d743c) && (param_3 == -1)) {
    uVar3 = FUN_ram_481a3df6(param_1,param_4,param_5,param_6,param_7);
    return uVar3;
  }
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
    puVar6 = puVar1;
    do {
      puVar1 = puVar6;
      if (param_2 == (undefined *)*puVar1) {
        puVar6 = (undefined4 *)puVar1[3];
        puVar2 = puVar1;
      }
      else {
        puVar6 = (undefined4 *)puVar1[3];
      }
    } while (puVar6 != (undefined4 *)0x0);
    if ((puVar2 != (undefined4 *)0x0) &&
       (((puVar2[2] == 0 && ((param_2 == (undefined *)*puVar1 || (puVar1[2] == 0)))) ||
        (param_3 != -1)))) {
      uVar3 = FUN_ram_481a3eee(puVar2,param_3,param_4,param_5,param_6,param_7);
      return uVar3;
    }
  }
  puVar6 = (undefined4 *)FUN_ram_4ff45080(1,0x10);
  if (puVar6 == (undefined4 *)0x0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"event","E (%lu) %s: alloc mem for new base node failed\n",uVar3,"event");
    uVar3 = 0x101;
  }
  else {
    *puVar6 = param_2;
    puVar6[1] = 0;
    puVar6[2] = 0;
    iVar4 = FUN_ram_481a3eee(puVar6,param_3,param_4,param_5,param_6,param_7);
    if (iVar4 == 0) {
      uVar3 = 0;
      if (puVar1 == (undefined4 *)0x0) {
        uVar5 = *(undefined4 *)(param_1 + 4);
        *(undefined4 **)(param_1 + 4) = puVar6;
        puVar6[3] = uVar5;
      }
      else {
        puVar6[3] = puVar1[3];
        puVar1[3] = puVar6;
      }
    }
    else {
      thunk_FUN_ram_4ff209c6(puVar6);
      uVar3 = 0x101;
    }
  }
  return uVar3;
}


