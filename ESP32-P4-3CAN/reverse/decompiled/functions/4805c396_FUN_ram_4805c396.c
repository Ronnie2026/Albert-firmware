/* Firmware entry: 0x4805c396 */

bool FUN_ram_4805c396(int param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uVar2 = local_10;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = 2;
  if (param_3 == 2) {
    iVar3 = 1;
LAB_ram_4805c3ac:
    iVar3 = *(int *)(iVar3 * 0x1228 + param_1 + 0x4c58);
  }
  else {
    if (param_3 == 4) goto LAB_ram_4805c3ac;
    iVar3 = 0;
    if (param_3 == 1) {
      iVar3 = 0;
      goto LAB_ram_4805c3ac;
    }
  }
  iVar4 = param_2 * 0x28 + param_1;
  if (*(char *)(iVar4 + 0x9fa) != '\0') {
    if ((*(byte *)(iVar4 + 0x9e8) == param_3) && (*(byte *)(iVar4 + 0x9e9) == param_4)) {
      return *(int *)(iVar4 + 0x9ec) == iVar3;
    }
    return false;
  }
  if (*(short *)(iVar4 + 0x9f8) != 0) {
    return false;
  }
  if (param_2 == 3) {
    cVar9 = '\x04';
  }
  else if (param_2 < 4) {
    cVar9 = '\r';
    if ((param_2 != 1) && (cVar9 = '\x05', param_2 != 2)) {
      cVar9 = '\t';
    }
  }
  else {
    cVar9 = '\b';
    if ((param_2 != 4) && (cVar9 = '\x02', param_2 != 7)) {
      cVar9 = '\f';
    }
  }
  iVar5 = param_2 * 0x28 + param_1;
  cVar7 = (param_4 == 6) << 2;
  iVar4 = *(int *)(iVar5 + 0x9f0) + 1;
  local_10._3_1_ = SUB41(uVar2,3);
  local_10._0_3_ = CONCAT12(cVar7,CONCAT11(cVar9,(char)param_3));
  if (iVar4 == 0) {
    iVar4 = 1;
    *(undefined4 *)(iVar5 + 0x9f0) = 1;
    if (param_3 == 1) {
      if (7 < param_2) {
        return false;
      }
      iVar5 = 0;
      iVar4 = 1;
    }
    else {
      if (param_3 == 2) {
        iVar5 = 1;
        goto joined_r0x4805c5c6;
      }
LAB_ram_4805c562:
      if (param_3 != 4) {
        return false;
      }
      if (7 < param_2) {
        return false;
      }
      iVar5 = 2;
    }
  }
  else {
    *(int *)(iVar5 + 0x9f0) = iVar4;
    iVar5 = 1;
    if (param_3 == 1) {
      iVar5 = 0;
    }
    else if (param_3 != 2) goto LAB_ram_4805c562;
joined_r0x4805c5c6:
    if (7 < param_2) {
      return false;
    }
  }
  if (iVar3 == 0) {
    return false;
  }
  if (iVar3 != *(int *)(param_1 + iVar5 * 0x1228 + 0x4c58)) {
    return false;
  }
  cVar6 = '\x04';
  if (param_2 == 4) {
    if (cVar9 != '\b') {
      return false;
    }
  }
  else if (param_2 < 5) {
    if (param_2 == 2) {
      if (cVar9 != '\x05') {
        return false;
      }
    }
    else {
      if (param_2 == 3) goto LAB_ram_4805c68e;
      bVar1 = cVar9 == '\r';
      if (param_2 != 1) goto LAB_ram_4805c5ba;
LAB_ram_4805c48a:
      if (!bVar1) {
        return false;
      }
    }
  }
  else if (param_2 < 7) {
    if (cVar9 != '\f') {
      return false;
    }
  }
  else {
    if (param_2 != 7) {
LAB_ram_4805c5ba:
      bVar1 = cVar9 == '\t';
      goto LAB_ram_4805c48a;
    }
    cVar6 = '\x02';
LAB_ram_4805c68e:
    if (cVar9 != cVar6) {
      return false;
    }
  }
  iVar5 = param_2 * 0x120 + param_1 + 0x4000;
  if ((*(char *)(iVar5 + 0x30d6) == '\0') || (*(char *)(iVar5 + 0x30d8) != '\0')) {
    iVar5 = param_1 + param_2 * 0x120;
    if ((*(int *)(iVar5 + 0x70e8) == 0 && *(int *)(iVar5 + 0x70ec) == 0) ||
       (*(char *)(iVar5 + 0x70e1) == -1)) {
      iVar5 = param_1 + param_2 * 0x120;
      if (*(short *)(iVar5 + 0x70d4) == 0) {
        uVar10 = *(uint *)(iVar5 + 0x70c8) + 1;
        iVar8 = (uint)(uVar10 < *(uint *)(iVar5 + 0x70c8)) + *(int *)(iVar5 + 0x70cc);
        if (uVar10 != 0 || iVar8 != 0) {
          uStack_c = CONCAT22(uStack_c._2_2_,(short)(param_4 + 1));
          *(int *)(iVar5 + 0x70c0) = iVar4;
          *(int *)(iVar5 + 0x70c4) = iVar3;
          *(uint *)(iVar5 + 0x70c8) = uVar10;
          *(int *)(iVar5 + 0x70cc) = iVar8;
          *(undefined1 *)(iVar5 + 0x70d8) = 0;
          *(undefined4 *)(iVar5 + 0x70bc) = uStack_c;
          *(uint *)(iVar5 + 0x70b8) = local_10;
          *(undefined2 *)(param_1 + param_2 * 0x120 + 0x70d6) = 1;
          *(undefined4 *)(iVar5 + 0x70d0) = 0;
          *(undefined1 *)(iVar5 + 0x70d9) = 0;
          goto LAB_ram_4805c4fe;
        }
      }
    }
  }
  else if ((((((*(uint *)(iVar5 + 0x30b8) ^ local_10) & 0xffff) == 0) &&
            (*(char *)(iVar5 + 0x30ba) == cVar7)) &&
           (iVar8 = param_1 + 0x4000 + param_2 * 0x120,
           (uint)*(ushort *)(iVar8 + 0x30bc) == param_4 + 1)) &&
          ((iVar4 == *(int *)(iVar8 + 0x30c0) && (iVar3 == *(int *)(iVar8 + 0x30c4))))) {
    uVar10 = *(uint *)(iVar5 + 0x30c8);
    iVar8 = *(int *)(iVar5 + 0x30cc);
LAB_ram_4805c4fe:
    iVar4 = param_1 + param_2 * 0x28;
    *(char *)(iVar4 + 0x9d8) = (char)param_2;
    *(uint *)(iVar4 + 0x9e0) = uVar10;
    *(int *)(iVar4 + 0x9e4) = iVar8;
    *(char *)(iVar4 + 0x9e8) = (char)param_3;
    *(char *)(iVar4 + 0x9e9) = (char)param_4;
    *(int *)(iVar4 + 0x9ec) = iVar3;
    *(undefined2 *)(param_2 * 0x28 + param_1 + 0x9fa) = 1;
    *(undefined4 *)(iVar4 + 0x9f4) = 1;
    *(undefined2 *)(iVar4 + 0x9fc) = 0;
    *(undefined1 *)(iVar4 + 0x9fe) = 0;
    return true;
  }
  return false;
}


