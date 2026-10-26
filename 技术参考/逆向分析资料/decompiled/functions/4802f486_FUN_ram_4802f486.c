/* Firmware entry: 0x4802f486 */

undefined4 FUN_ram_4802f486(int *param_1,ulong *param_2,byte *param_3)

{
  bool bVar1;
  int iVar2;
  char *******__nptr;
  ulong uVar3;
  byte bVar4;
  ulong *puVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  ulong uVar10;
  char *pcStack_34;
  char ******local_30 [3];
  char cStack_21;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_3 = 0;
  cVar8 = *(char *)((int)param_1 + 0xf);
  iVar2 = 0;
  if (cVar8 < '\0') goto LAB_ram_4802f5fc;
LAB_ram_4802f4b4:
  iVar6 = 0;
  if (*param_1 != 0) {
    iVar6 = param_1[2];
  }
  if (iVar6 <= iVar2) {
    return 1;
  }
  do {
    if (cVar8 < '\0') goto LAB_ram_4802f506;
    while( true ) {
      iVar6 = 0;
      if (*param_1 != 0) {
        iVar6 = param_1[2];
      }
      if (iVar6 <= iVar2) break;
      while( true ) {
        iVar6 = FUN_ram_4802b236(param_1,iVar2);
        if ((iVar6 != 0x2c) && (iVar6 = FUN_ram_4802b236(param_1,iVar2), iVar6 != 0x3b)) {
          iVar6 = FUN_ram_4802b236(param_1,iVar2);
          iVar6 = isspace(iVar6);
          if (iVar6 == 0) {
            cVar8 = *(char *)((int)param_1 + 0xf);
            goto LAB_ram_4802f516;
          }
        }
        cVar8 = *(char *)((int)param_1 + 0xf);
        iVar2 = iVar2 + 1;
        if (-1 < cVar8) break;
LAB_ram_4802f506:
        if ((int)(*(byte *)((int)param_1 + 0xf) & 0x7f) <= iVar2) goto LAB_ram_4802f516;
      }
    }
LAB_ram_4802f516:
    if (cVar8 < '\0') {
      uVar7 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    }
    else {
      uVar7 = 0;
      if (*param_1 != 0) {
        uVar7 = param_1[2];
      }
    }
    if ((int)uVar7 <= iVar2) {
      return 1;
    }
    iVar6 = iVar2;
    if (cVar8 < '\0') goto LAB_ram_4802f56c;
    while( true ) {
      iVar9 = 0;
      if (*param_1 != 0) {
        iVar9 = param_1[2];
      }
      if (iVar9 <= iVar6) break;
      while( true ) {
        iVar9 = FUN_ram_4802b236(param_1,iVar6);
        if ((iVar9 == 0x2c) || (iVar9 = FUN_ram_4802b236(param_1,iVar6), iVar9 == 0x3b))
        goto LAB_ram_4802f57c;
        iVar9 = FUN_ram_4802b236(param_1,iVar6);
        iVar9 = isspace(iVar9);
        if (iVar9 != 0) goto LAB_ram_4802f57c;
        iVar6 = iVar6 + 1;
        if (-1 < *(char *)((int)param_1 + 0xf)) break;
LAB_ram_4802f56c:
        if ((int)(*(byte *)((int)param_1 + 0xf) & 0x7f) <= iVar6) goto LAB_ram_4802f57c;
      }
    }
LAB_ram_4802f57c:
    FUN_ram_4802b356(local_30,param_1,iVar2,iVar6);
    pcStack_34 = (char *)0x0;
    __nptr = local_30;
    if (-1 < cStack_21) {
      __nptr = (char *******)local_30[0];
    }
    uVar3 = strtoul((char *)__nptr,&pcStack_34,0x10);
    if (((pcStack_34 == (char *)0x0) || (*pcStack_34 != '\0')) || (0x7ff < uVar3)) {
LAB_ram_4802f626:
      FUN_ram_4802a59e(local_30);
      return 0;
    }
    uVar7 = (uint)*param_3;
    if (uVar7 == 0) {
      bVar4 = 1;
      puVar5 = param_2;
LAB_ram_4802f5e4:
      *param_3 = bVar4;
      *puVar5 = uVar3;
    }
    else {
      bVar1 = false;
      puVar5 = param_2;
      do {
        uVar10 = *puVar5;
        puVar5 = puVar5 + 1;
        bVar1 = (bool)(bVar1 | uVar10 == uVar3);
      } while (param_2 + uVar7 != puVar5);
      if (!bVar1) {
        if (0x3f < uVar7) goto LAB_ram_4802f626;
        bVar4 = *param_3 + 1;
        puVar5 = param_2 + uVar7;
        goto LAB_ram_4802f5e4;
      }
    }
    FUN_ram_4802a59e(local_30);
    cVar8 = *(char *)((int)param_1 + 0xf);
    iVar2 = iVar6 + 1;
    if (-1 < cVar8) goto LAB_ram_4802f4b4;
LAB_ram_4802f5fc:
    if ((int)(*(byte *)((int)param_1 + 0xf) & 0x7f) <= iVar2) {
      return 1;
    }
  } while( true );
}


