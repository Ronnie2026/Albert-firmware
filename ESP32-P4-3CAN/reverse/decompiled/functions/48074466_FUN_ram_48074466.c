/* Firmware entry: 0x48074466 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48074466(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_29c [166];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar4 = &DAT_ram_482230e4;
  puVar3 = local_29c;
  do {
    uVar7 = puVar4[1];
    uVar1 = puVar4[2];
    uVar6 = puVar4[3];
    uVar5 = puVar4[4];
    uVar2 = puVar4[5];
    *puVar3 = *puVar4;
    puVar3[1] = uVar7;
    puVar3[2] = uVar1;
    puVar3[3] = uVar6;
    puVar3[4] = uVar5;
    puVar3[5] = uVar2;
    puVar4 = puVar4 + 6;
    puVar3 = puVar3 + 6;
  } while (puVar4 != (undefined4 *)&DAT_ram_4822336c);
  *puVar3 = _DAT_ram_4822336c;
  FUN_ram_48072c5c(param_1,param_2,local_29c);
  return;
}


