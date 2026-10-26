/* Firmware entry: 0x4802d110 */

undefined4 FUN_ram_4802d110(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_550 [330];
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined4 auStack_20 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar7 = local_550;
  if ((DAT_ram_4ff6df88 == 0) ||
     (iVar2 = FUN_ram_4ff3b5f0(DAT_ram_4ff6df88,0x32), iVar1 = DAT_ram_4ff6df8c, iVar2 != 1)) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_ram_48025ba6();
    memset(local_550,0,0x530);
    FUN_ram_4ff45158(local_550,iVar1,0x524);
    uStack_28 = *(undefined1 *)(iVar1 + 0xa00);
    if ((*(char *)(iVar1 + 0x5d2) != '\0') && (0x9c4 < (uint)(iVar2 - *(int *)(iVar1 + 0x534)))) {
      uStack_28 = 2;
    }
    uStack_27 = 0xff;
    if ((*(char *)(iVar1 + 0x5d3) != '\0') && ((uint)(iVar2 - *(int *)(iVar1 + 0x544)) < 0x5dd)) {
      uStack_27 = *(undefined1 *)(iVar1 + 0x5d4);
    }
    puVar6 = param_1;
    do {
      uVar3 = *puVar7;
      uVar4 = puVar7[1];
      uVar5 = puVar7[2];
      puVar6[3] = puVar7[3];
      *puVar6 = uVar3;
      puVar6[1] = uVar4;
      puVar6[2] = uVar5;
      iVar1 = DAT_ram_4ff6df88;
      puVar7 = puVar7 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar7 != auStack_20);
    param_1[0x14b] = DAT_ram_4ff6b738;
    FUN_ram_4ff3afa2(iVar1,0,0,0);
    uVar3 = 1;
  }
  return uVar3;
}


