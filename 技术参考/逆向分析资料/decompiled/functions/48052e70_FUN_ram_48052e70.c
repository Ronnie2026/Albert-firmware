/* Firmware entry: 0x48052e70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48052e70(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  int local_b4 [41];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dd80 == 0) {
    return;
  }
  if (DAT_ram_4ff5c53c != (int *)0x0) {
    for (piVar1 = DAT_ram_4ff5c53c; piVar1 != DAT_ram_4ff5c53c + DAT_ram_4ff5c540 * 0x49;
        piVar1 = piVar1 + 0x49) {
      if (DAT_ram_4ff6dd80 == *piVar1) {
        FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
        piVar8 = &DAT_ram_4ff61958;
        piVar7 = local_b4;
        do {
          iVar2 = piVar8[1];
          iVar4 = piVar8[2];
          iVar5 = piVar8[3];
          *piVar7 = *piVar8;
          piVar7[1] = iVar2;
          piVar7[2] = iVar4;
          piVar7[3] = iVar5;
          piVar8 = piVar8 + 4;
          piVar7 = piVar7 + 4;
        } while (piVar8 != (int *)&DAT_ram_4ff619f8);
        *piVar7 = _DAT_ram_4ff619f8;
        FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
        piVar8 = local_b4;
        piVar7 = piVar1 + 0xb;
        do {
          iVar2 = piVar8[1];
          iVar4 = piVar8[2];
          iVar5 = piVar8[3];
          *piVar7 = *piVar8;
          piVar7[1] = iVar2;
          piVar7[2] = iVar4;
          piVar7[3] = iVar5;
          piVar8 = piVar8 + 4;
          piVar7 = piVar7 + 4;
        } while (piVar8 != local_b4 + 0x28);
        *piVar7 = *piVar8;
        FUN_ram_4ff3ec14(&DAT_ram_4ff69338,0xffffffff);
        piVar8 = &DAT_ram_4ff6934c;
        piVar7 = local_b4;
        do {
          iVar9 = piVar8[1];
          iVar2 = piVar8[2];
          iVar4 = piVar8[3];
          iVar5 = piVar8[4];
          iVar6 = piVar8[5];
          *piVar7 = *piVar8;
          piVar7[1] = iVar9;
          piVar7[2] = iVar2;
          piVar7[3] = iVar4;
          piVar7[4] = iVar5;
          piVar7[5] = iVar6;
          piVar8 = piVar8 + 6;
          piVar7 = piVar7 + 6;
        } while (piVar8 != &DAT_ram_4ff69394);
        FUN_ram_4ff3ee10(&DAT_ram_4ff69338);
        piVar8 = local_b4;
        piVar7 = piVar1 + 0x34;
        do {
          iVar9 = piVar8[1];
          iVar6 = piVar8[2];
          iVar2 = piVar8[3];
          iVar4 = piVar8[4];
          iVar5 = piVar8[5];
          *piVar7 = *piVar8;
          piVar7[1] = iVar9;
          piVar7[2] = iVar6;
          piVar7[3] = iVar2;
          piVar7[4] = iVar4;
          piVar7[5] = iVar5;
          piVar8 = piVar8 + 6;
          piVar7 = piVar7 + 6;
        } while (piVar8 != local_b4 + 0x12);
        uVar3 = FUN_ram_48025ba6();
        FUN_ram_48052b10(local_b4,&DAT_ram_4ff69640,uVar3);
        *(undefined2 *)(piVar1 + 0x46) = (undefined2)local_b4[0];
        uVar10 = FUN_ram_4803165c();
        *(short *)((int)piVar1 + 0x11e) = (short)((ulonglong)uVar10 >> 0x20);
        *(short *)(piVar1 + 0x48) = (short)((ulonglong)uVar10 >> 0x30);
        *(short *)((int)piVar1 + 0x11a) = (short)uVar10;
        *(short *)(piVar1 + 0x47) = (short)((ulonglong)uVar10 >> 0x10);
        return;
      }
    }
  }
  return;
}


