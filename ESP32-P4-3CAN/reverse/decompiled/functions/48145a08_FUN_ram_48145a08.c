/* Firmware entry: 0x48145a08 */

int FUN_ram_48145a08(int *param_1,uint param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  int iVar13;
  ushort uVar14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar8 = (int *)&DAT_ram_4ff6cf48;
  iVar11 = 10;
  iVar3 = 10;
  uVar12 = 0;
  uVar4 = 0;
  iVar5 = 10;
  iVar2 = 0;
  iVar13 = 10;
  uVar14 = 0;
LAB_ram_48145a3a:
  do {
    iVar6 = iVar2;
    bVar7 = *(byte *)(piVar8 + 5);
    piVar9 = piVar8;
    iVar10 = iVar6;
    if (iVar5 == 10) {
      if (bVar7 == 0) {
        piVar9 = piVar8 + 6;
        iVar10 = (int)((iVar6 + 1U) * 0x10000) >> 0x10;
        if ((iVar6 + 1U & 0xffff) == 10) break;
        bVar7 = *(byte *)(piVar8 + 0xb);
        iVar5 = iVar6;
        if (bVar7 == 0) goto LAB_ram_48145a66;
      }
LAB_ram_48145a44:
      iVar6 = iVar5;
      if ((param_1 != (int *)0x0) && (*param_1 == piVar9[1])) {
        if (param_3 == 0) {
          return iVar10;
        }
        if (piVar9[2] == param_3) {
          return iVar10;
        }
      }
      iVar5 = iVar6;
      if (bVar7 != 1) {
        if ((bVar7 < 5) && (uVar12 <= *(ushort *)((int)piVar9 + 0x12))) {
          iVar11 = iVar10;
          uVar12 = *(ushort *)((int)piVar9 + 0x12);
        }
        goto LAB_ram_48145a66;
      }
      uVar1 = *(ushort *)((int)piVar9 + 0x12);
      if (*piVar9 != 0) {
        if (uVar1 < uVar14) goto LAB_ram_48145a66;
        piVar8 = piVar9 + 6;
        iVar2 = (int)((iVar10 + 1U) * 0x10000) >> 0x10;
        iVar13 = iVar10;
        uVar14 = uVar1;
        if ((iVar10 + 1U & 0xffff) == 10) break;
        goto LAB_ram_48145a3a;
      }
      iVar2 = iVar10;
      if (uVar1 < uVar4) goto LAB_ram_48145a66;
    }
    else {
      if (bVar7 != 0) goto LAB_ram_48145a44;
LAB_ram_48145a66:
      iVar2 = iVar3;
      iVar6 = iVar5;
      uVar1 = uVar4;
    }
    uVar4 = uVar1;
    iVar3 = iVar2;
    piVar8 = piVar9 + 6;
    iVar5 = iVar6;
    iVar2 = (int)((iVar10 + 1U) * 0x10000) >> 0x10;
  } while ((iVar10 + 1U & 0xffff) != 10);
  if ((param_2 & 2) != 0) {
    return -1;
  }
  if (iVar6 == 10) {
    if ((param_2 & 1) != 0) goto LAB_ram_48145b28;
LAB_ram_48145b7e:
    iVar6 = -1;
  }
  else {
    if (9 < iVar6) {
LAB_ram_48145b28:
      if (iVar11 < 10) {
        iVar6 = iVar11;
        if (*(int *)(&DAT_ram_4ff6cf48 + iVar11 * 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/etharp.c",0x16e,
                           "etharp_find_entry","arp_table[i].q == NULL");
        }
      }
      else {
        iVar6 = iVar3;
        if ((iVar3 == 10) && (iVar6 = iVar13, 9 < iVar13)) goto LAB_ram_48145b7e;
      }
      FUN_ram_48145980(iVar6);
    }
    if ((&DAT_ram_4ff6cf5c)[iVar6 * 0x18] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/etharp.c",0x185,"etharp_find_entry",
                       "arp_table[i].state == ETHARP_STATE_EMPTY");
    }
    if (param_1 != (int *)0x0) {
      (&DAT_ram_4ff6cf4c)[iVar6 * 6] = *param_1;
    }
    (&DAT_ram_4ff6cf5a)[iVar6 * 0xc] = 0;
    (&DAT_ram_4ff6cf50)[iVar6 * 6] = param_3;
  }
  return iVar6;
}


