/* Firmware entry: 0x48040cd4 */

uint FUN_ram_48040cd4(int *param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined *puVar7;
  byte *pbVar8;
  byte bVar9;
  undefined *puVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0) {
    return 0;
  }
  cVar1 = *(char *)((int)param_1 + 0xd);
  if (cVar1 == '\x01') {
    if ((*param_1 != 0x3fd) || ((char)param_1[1] == '\0')) {
LAB_ram_48040d08:
      if (2 < param_2) {
        return 0;
      }
      if (param_2 != 2) {
        iVar2 = 0;
        goto LAB_ram_48040d14;
      }
      goto LAB_ram_48040d48;
    }
    bVar9 = *(byte *)((int)param_1 + 5) & 7;
    if (bVar9 == 1) {
      iVar2 = 2;
    }
    else {
      if (bVar9 == 2) {
        if (2 < param_2) {
          return 0;
        }
        if (param_2 == 2) goto LAB_ram_48040d48;
        iVar2 = 3;
        goto LAB_ram_48040d14;
      }
      if ((*(byte *)((int)param_1 + 5) & 7) == 0) {
        if (param_2 != 2) {
          return 0;
        }
        goto LAB_ram_48040d48;
      }
LAB_ram_48040d3c:
      iVar2 = 0;
    }
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x04') {
        if (*param_1 == 0x370) {
          if (2 < param_2) {
            return 0;
          }
          if (param_2 != 2) {
            iVar2 = 5;
            goto LAB_ram_48040d14;
          }
          goto LAB_ram_48040d48;
        }
        if (*param_1 == 0x30a) {
          iVar2 = 6;
          goto joined_r0x48040e70;
        }
      }
      goto LAB_ram_48040d08;
    }
    if (*param_1 != 0x3c2) {
      if (*param_1 == 0x679) {
        return 0;
      }
      goto LAB_ram_48040d3c;
    }
    iVar2 = 0;
    if ((char)param_1[1] != '\0') {
      iVar2 = (uint)((*(byte *)((int)param_1 + 5) & 3) == 1) << 2;
    }
  }
joined_r0x48040e70:
  if (2 < param_2) {
    return 0;
  }
  if (param_2 != 2) {
LAB_ram_48040d14:
    if (param_2 != 1) {
      return (uint)(iVar2 == 0);
    }
    return (uint)param_1[6] >> 8 & 1;
  }
LAB_ram_48040d48:
  fence();
  if (DAT_ram_4ff4b8d0 == '\0') {
    return 0;
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff4b8c8,0xffffffff);
  uVar3 = (uint)DAT_ram_4ff4b935;
  uVar6 = uVar3;
  if (uVar3 != 0) {
    if (DAT_ram_4ff4b934 != 0) {
      puVar10 = &DAT_ram_4ff4b8c8;
      do {
        if (((*(int *)(puVar10 + 0xc) == *param_1) &&
            ((puVar10[0x10] & *(byte *)((int)param_1 + 0xd)) != 0)) &&
           (uVar4 = (uint)*(byte *)(param_1 + 1), uVar4 == (byte)puVar10[0x11])) {
          uVar6 = uVar3;
          if (uVar4 == 0) goto LAB_ram_48040e3c;
          pbVar8 = (byte *)((int)param_1 + 5);
          pbVar5 = pbVar8 + uVar4;
          puVar7 = puVar10;
          do {
            bVar9 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            uVar6 = uVar6 & ((bVar9 ^ puVar7[0x1a]) & puVar7[0x12]) == 0;
            puVar7 = puVar7 + 1;
          } while (pbVar8 != pbVar5);
          if (uVar6 != 0) goto LAB_ram_48040e3c;
        }
        puVar10 = puVar10 + 0x18;
      } while (puVar10 != &DAT_ram_4ff4b8c8 + (uint)DAT_ram_4ff4b934 * 0x18);
    }
    uVar6 = 0;
  }
LAB_ram_48040e3c:
  FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
  return uVar6;
}


