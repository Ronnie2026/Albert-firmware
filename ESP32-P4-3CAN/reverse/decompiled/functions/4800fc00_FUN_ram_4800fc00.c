/* Firmware entry: 0x4800fc00 */

undefined4 FUN_ram_4800fc00(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_60 [18];
  undefined4 auStack_18 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar5 = local_60;
  if (DAT_ram_4ff6db46 != '\0') {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp_hosted_transport_config",
                     "E (%lu) %s: Transport already initialized (through constructor?), reconfiguring not allowed\n"
                     ,uVar1,"esp_hosted_transport_config");
    return 0x10d;
  }
  if (param_1 == (undefined4 *)0x0) {
    FUN_ram_48024102(local_60);
    puVar4 = &DAT_ram_4ff5b1bc;
    do {
      uVar7 = puVar5[1];
      uVar6 = puVar5[2];
      uVar1 = puVar5[3];
      uVar2 = puVar5[4];
      uVar3 = puVar5[5];
      *puVar4 = *puVar5;
      puVar4[1] = uVar7;
      puVar4[2] = uVar6;
      puVar4[3] = uVar1;
      puVar4[4] = uVar2;
      puVar4[5] = uVar3;
      puVar5 = puVar5 + 6;
      puVar4 = puVar4 + 6;
    } while (puVar5 != auStack_18);
  }
  else {
    puVar4 = &DAT_ram_4ff5b1bc;
    puVar5 = param_1 + 0x12;
    do {
      uVar7 = param_1[1];
      uVar6 = param_1[2];
      uVar1 = param_1[3];
      uVar2 = param_1[4];
      uVar3 = param_1[5];
      *puVar4 = *param_1;
      puVar4[1] = uVar7;
      puVar4[2] = uVar6;
      puVar4[3] = uVar1;
      puVar4[4] = uVar2;
      puVar4[5] = uVar3;
      param_1 = param_1 + 6;
      puVar4 = puVar4 + 6;
    } while (param_1 != puVar5);
  }
  DAT_ram_4ff5b1b8 = 1;
  DAT_ram_4ff6db46 = 1;
  return 0;
}


