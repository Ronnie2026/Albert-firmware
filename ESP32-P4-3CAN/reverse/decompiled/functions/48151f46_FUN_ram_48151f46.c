/* Firmware entry: 0x48151f46 */

undefined4 FUN_ram_48151f46(int *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uStack_48;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar9 = *param_1;
  uVar8 = *(uint *)(iVar9 + 0x1218);
  uVar6 = *(undefined4 *)(iVar9 + 0x122c);
  uVar1 = *(undefined4 *)(iVar9 + 0x121c);
  uVar16 = *(undefined4 *)(iVar9 + 0x1220);
  uVar15 = *(undefined4 *)(iVar9 + 0x1224);
  uVar14 = *(undefined4 *)(iVar9 + 0x1228);
  uVar10 = uVar8 >> 1 & 1;
  uVar11 = uVar8 >> 3 & 1;
  uVar12 = uVar8 >> 8 & 1;
  uVar13 = uVar8 >> 9 & 1;
  uVar2 = (ushort)uVar8 & 1;
  if (((((uVar8 & 3) == 2) && (param_2[1] == '\n')) && (9 < param_3)) && (*param_2 == '\x01')) {
    iVar4 = FUN_ram_48137fd6((uint)(byte)param_2[5] |
                             (((uint)(byte)param_2[3] | (*(ushort *)(param_2 + 2) & 0xff) << 8) << 8
                             | (uint)(byte)param_2[4]) << 8);
    if (*(int *)(iVar9 + 0x121c) != iVar4) {
      return 0;
    }
    iVar4 = FUN_ram_48137fd6((uint)(byte)param_2[9] |
                             (((uint)(byte)param_2[7] | (*(ushort *)(param_2 + 6) & 0xff) << 8) << 8
                             | (uint)(byte)param_2[8]) << 8);
    if (*(int *)(iVar9 + 0x1220) != iVar4) {
      return 0;
    }
    uVar10 = 0;
    param_3 = param_3 + -10;
    param_2 = param_2 + 10;
  }
  uVar7 = *(ushort *)(iVar9 + 0x1218);
  if ((uVar7 & 8) != 0) {
    uVar3 = (uint)(byte)param_2[1];
    if (uVar3 != (uint)((uVar7 & 0x10) == 0) * 2 + 4) goto LAB_ram_48151fd8;
    if ((int)uVar3 <= param_3) {
      if (*param_2 == '\x02') {
        param_3 = param_3 - uVar3;
        if (*(ushort *)(iVar9 + 0x122c) !=
            (ushort)((ushort)(byte)param_2[3] | *(short *)(param_2 + 2) << 8)) {
          return 0;
        }
        if ((uVar7 & 0x10) == 0) {
          if (*(char *)(iVar9 + 0x122e) != param_2[4]) {
            return 0;
          }
          if ((uint)(byte)param_2[5] != (*(uint *)(iVar9 + 0x1218) >> 5 & 1)) {
            return 0;
          }
          param_2 = param_2 + 6;
          uVar11 = 0;
        }
        else {
          param_2 = param_2 + 4;
          uVar11 = 0;
        }
      }
      goto LAB_ram_48151fd8;
    }
LAB_ram_48151fe8:
    if ((uVar7 & 0x100) != 0) goto LAB_ram_48151ff0;
    goto LAB_ram_48152138;
  }
LAB_ram_48151fd8:
  if ((uVar7 & 1) == 0) {
LAB_ram_481520b2:
    if ((uVar7 & 0x100) == 0) {
LAB_ram_48152138:
      if ((((uVar7 & 0x200) == 0) || (param_2[1] != '\x06')) || (param_3 < 6))
      goto LAB_ram_48151ff0;
      goto LAB_ram_48152150;
    }
    if ((param_2[1] != '\x06') || (param_3 < 6)) goto LAB_ram_48151ff0;
    cVar5 = *param_2;
LAB_ram_481520cc:
    if (cVar5 == -0x7f) {
      iVar4 = FUN_ram_48137fd6((uint)(byte)param_2[5] |
                               (((uint)(byte)param_2[3] | (*(ushort *)(param_2 + 2) & 0xff) << 8) <<
                                8 | (uint)(byte)param_2[4]) << 8);
      if (*(int *)(iVar9 + 0x1224) != iVar4) {
        return 0;
      }
      uVar7 = *(ushort *)(iVar9 + 0x1218);
      param_3 = param_3 + -6;
      param_2 = param_2 + 6;
      uVar12 = 0;
      goto LAB_ram_48152138;
    }
    if ((*(ushort *)(iVar9 + 0x1218) & 0x200) == 0) {
      return 0;
    }
    if (param_2[1] != '\x06') {
      return 0;
    }
  }
  else {
    if (param_2[1] != '\x06') goto LAB_ram_48151fe8;
    if (param_3 < 6) goto LAB_ram_48151ff0;
    cVar5 = *param_2;
    if (cVar5 == '\x03') {
      iVar4 = FUN_ram_48137fd6((uint)(byte)param_2[5] |
                               (((uint)(byte)param_2[3] | (*(ushort *)(param_2 + 2) & 0xff) << 8) <<
                                8 | (uint)(byte)param_2[4]) << 8);
      if (*(int *)(iVar9 + 0x121c) != iVar4) {
        return 0;
      }
      uVar7 = *(ushort *)(iVar9 + 0x1218);
      param_3 = param_3 + -6;
      param_2 = param_2 + 6;
      uVar2 = 0;
      goto LAB_ram_481520b2;
    }
    if ((uVar7 & 0x100) != 0) goto LAB_ram_481520cc;
    if ((uVar7 & 0x200) == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
LAB_ram_48152150:
    cVar5 = *param_2;
  }
  if (cVar5 != -0x7d) {
    return 0;
  }
  iVar4 = FUN_ram_48137fd6((uint)(byte)param_2[5] |
                           (((uint)(byte)param_2[3] | (*(ushort *)(param_2 + 2) & 0xff) << 8) << 8 |
                           (uint)(byte)param_2[4]) << 8);
  if (*(int *)(iVar9 + 0x1228) != iVar4) {
    return 0;
  }
  uVar13 = 0;
  param_3 = param_3 + -6;
LAB_ram_48151ff0:
  if (param_3 != 0) {
    return 0;
  }
  if ((char)param_1[4] != '\t') {
    uStack_48 = CONCAT22((short)(uVar8 >> 0x10),
                         (ushort)(uVar10 << 1) | uVar2 | (ushort)(uVar11 << 3) |
                         (ushort)(uVar12 << 8) | (ushort)(uVar13 << 9) | (ushort)uVar8 & 0xfcf4);
    *(undefined4 *)(iVar9 + 0x1218) = uStack_48;
    *(undefined4 *)(iVar9 + 0x121c) = uVar1;
    *(undefined4 *)(iVar9 + 0x1220) = uVar16;
    *(undefined4 *)(iVar9 + 0x1224) = uVar15;
    *(undefined4 *)(iVar9 + 0x1228) = uVar14;
    *(undefined4 *)(iVar9 + 0x122c) = uVar6;
  }
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return 1;
}


