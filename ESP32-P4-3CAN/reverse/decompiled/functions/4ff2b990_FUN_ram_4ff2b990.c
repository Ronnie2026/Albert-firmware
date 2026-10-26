/* Firmware entry: 0x4ff2b990 */

void FUN_ram_4ff2b990(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  uVar8 = FUN_ram_4ff21a0a();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47edc,0xffffffff);
  if (DAT_ram_4ff6e02c == 0) {
    DAT_ram_4ff6be7c = 1;
    DAT_ram_4ff6be80 = param_1;
    DAT_ram_4ff6be84 = param_2;
    DAT_ram_4ff6be88 = param_3;
    DAT_ram_4ff6be8c = __divdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
    puVar6 = (undefined4 *)&DAT_ram_4ff6bde0;
    DAT_ram_4ff6bed1 = DAT_ram_4ff6e030;
    puVar4 = &DAT_ram_4ff6be90;
    do {
      uVar1 = puVar6[1];
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      *puVar4 = *puVar6;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      puVar6 = puVar6 + 4;
      puVar4 = puVar4 + 4;
    } while (puVar6 != (undefined4 *)0x4ff6be20);
    *(undefined1 *)puVar4 = uRam4ff6be20;
    DAT_ram_501091e0 = 0;
    puVar4 = &DAT_ram_501091e4;
    puVar6 = &DAT_ram_4ff6be7c;
    do {
      puVar7 = puVar6;
      puVar5 = puVar4;
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      uVar3 = puVar7[3];
      *puVar5 = *puVar7;
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar4 = puVar5 + 4;
      puVar6 = puVar7 + 4;
    } while (puVar7 + 4 != (undefined4 *)0x4ff6becc);
    uVar1 = puVar7[5];
    puVar5[4] = uRam4ff6becc;
    puVar5[5] = uVar1;
    DAT_ram_5010923c = FUN_ram_4ff2b8dc();
    fence();
    DAT_ram_501091e0 = 0x504e4631;
    fence();
    DAT_ram_4ff6e02c = 1;
  }
  else {
    DAT_ram_4ff6bf0c = DAT_ram_4ff6bf0c + 1;
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47edc);
  return;
}


