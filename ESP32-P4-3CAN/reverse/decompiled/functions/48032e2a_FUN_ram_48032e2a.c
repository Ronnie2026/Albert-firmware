/* Firmware entry: 0x48032e2a */

bool FUN_ram_48032e2a(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_c4;
  undefined4 uStack_c0;
  char cStack_ba;
  char acStack_b8 [4];
  undefined4 local_b4 [40];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48025b94();
  iVar1 = DAT_ram_4ff68af0;
  if ((DAT_ram_4ff69120 == 0 && DAT_ram_4ff69124 == 0) || (DAT_ram_4ff69119 == -1)) {
    iVar7 = DAT_ram_4ff68af0 + 0xb18;
    FUN_ram_4ff3ec14(iVar7,0xffffffff);
    puVar6 = (undefined4 *)(iVar1 + 0xb38);
    puVar5 = &local_c4;
    do {
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      *puVar5 = *puVar6;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      puVar6 = puVar6 + 4;
      puVar5 = puVar5 + 4;
    } while (puVar6 != (undefined4 *)(iVar1 + 0xbd8));
    *puVar5 = *puVar6;
    FUN_ram_4ff3ee10(iVar7);
    if ((((((*(char *)(DAT_ram_4ff68af0 + 0x84a0) == '\0') || (cStack_ba == '\0')) ||
          (acStack_b8[0] == '\0')) || ((local_c4._1_1_ == '\f' || (DAT_ram_4ff68f38 == '\0')))) ||
        ((DAT_ram_4ff68ffc == 0 || (DAT_ram_4ff68ffc == DAT_ram_4ff69000)))) ||
       ((((DAT_ram_4ff68cd4 == '\0' && (DAT_ram_4ff68d74 == '\0')) && (DAT_ram_4ff69254 == '\0')) ||
        (DAT_ram_4ff68ffc == DAT_ram_4ff69210)))) {
      return false;
    }
    if (DAT_ram_4ff69004 == DAT_ram_4ff69128) {
      return DAT_ram_4ff6912c != DAT_ram_4ff68ffc;
    }
  }
  return true;
}


