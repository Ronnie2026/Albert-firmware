/* Firmware entry: 0x481888fc */

int FUN_ram_481888fc(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 uStack_28;
  int *piStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_481774c4(param_2);
  if ((iVar2 == 1) || (iVar2 == 6)) {
    uVar3 = FUN_ram_481774b6(param_2);
    return -(uint)(uVar3 < *(uint *)(param_1 + 0xc));
  }
  if (iVar2 - 2U < 3) {
    piStack_24 = (int *)param_2[1];
    uStack_28 = *param_2;
    uVar11 = FUN_ram_481774c4(&uStack_28);
    if (2 < (int)uVar11 - 2U) {
      ebreak();
      do {
        piVar8 = (int *)((ulonglong)uVar11 >> 0x20);
        piVar9 = (int *)uVar11;
        if (((*piVar9 != *piVar8) || (piVar9[1] != piVar8[1])) ||
           (iVar2 = FUN_ram_4ff4511a(piVar9[2],piVar8[2]), iVar2 != 0)) {
          return -1;
        }
        iVar2 = piVar9[3];
        iVar10 = piVar8[3];
        if (((iVar2 != iVar10) || (piVar9[4] != piVar8[4])) ||
           (iVar4 = FUN_ram_4ff4511a(piVar9[5],piVar8[5]), iVar4 != 0)) {
          if ((iVar2 != 0xc) && (iVar2 != 0x13)) {
            return -1;
          }
          if ((iVar10 != 0xc) && (iVar10 != 0x13)) {
            return -1;
          }
          iVar2 = piVar9[4];
          if (iVar2 != piVar8[4]) {
            return -1;
          }
          pbVar7 = (byte *)piVar9[5];
          pbVar6 = (byte *)piVar8[5];
          if (iVar2 != 0) {
            pbVar5 = pbVar7 + iVar2;
            do {
              bVar1 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              if (bVar1 != *pbVar6) {
                if ((bVar1 ^ *pbVar6) != 0x20) {
                  return -1;
                }
                if (0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) {
                  return -1;
                }
              }
              pbVar6 = pbVar6 + 1;
            } while (pbVar7 != pbVar5);
          }
        }
        if ((char)piVar9[7] != (char)piVar8[7]) {
          return -1;
        }
        iVar2 = piVar8[6];
        uVar11 = CONCAT44(iVar2,piVar9[6]);
        if (piVar9[6] == 0) {
          return -(uint)(iVar2 != 0);
        }
        if (iVar2 == 0) {
          return -1;
        }
      } while( true );
    }
    if (*piStack_24 != 0) {
      return -(uint)((1 << (*piStack_24 - 1U & 0x1f) & *(uint *)(param_1 + 8)) == 0);
    }
  }
  return -1;
}


