/* Firmware entry: 0x480744c8 */

int FUN_ram_480744c8(uint param_1,int param_2,void *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  void *__s;
  uint uVar10;
  char *__s_00;
  void *pvVar11;
  uint uVar12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_4807271e(param_1,param_2,0x2ff);
  if (iVar3 == 0) {
    return 0;
  }
  if (param_1 < 9) {
    uVar12 = 0;
    uVar2 = 0xffffffff;
    if (param_1 != 8) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_48195164("%s: __pos (which is %zu) > __size (which is %zu)",
                       "basic_string_view::substr",8,param_1);
    }
  }
  else {
    uVar2 = 8;
    do {
      if ((*(byte *)(param_2 + uVar2) & 0xef) == 0x2f) {
        uVar12 = param_1 - 8;
        if (uVar2 - 8 < param_1 - 8) {
          uVar12 = uVar2 - 8;
        }
        goto LAB_ram_48074520;
      }
      uVar2 = uVar2 + 1;
    } while (param_1 != uVar2);
    uVar12 = param_1 - 8;
    uVar2 = 0xffffffff;
  }
LAB_ram_48074520:
  if (0x180 < uVar12) {
    return 0;
  }
  memset((void *)((int)param_3 + 0x181),0,0x181);
  memset(param_3,0,0x181);
  __s = (void *)((int)param_3 + 0x302);
  memset(__s,0,0x300);
  memset((void *)((int)param_3 + 0x602),0,0x300);
  pvVar11 = (void *)(param_2 + 8);
  *(undefined2 *)((int)param_3 + 0x902) = 0x1bb;
  FUN_ram_4ff45158((void *)((int)param_3 + 0x181),pvVar11,uVar12);
  if (*(char *)(param_2 + 8) == '[') {
    if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_48195164("%s: __pos (which is %zu) > __size (which is %zu)",
                       "basic_string_view::substr",1,0);
    }
    pvVar4 = memchr(pvVar11,0x5d,uVar12);
    if (pvVar4 == (void *)0x0) {
      uVar10 = 0xffffffff;
      uVar6 = 0xfffffffe;
    }
    else {
      uVar10 = (int)pvVar4 - (int)pvVar11;
      uVar6 = uVar10 - 1;
    }
    uVar7 = uVar12 - 1;
    if (uVar6 < uVar12 - 1) {
      uVar7 = uVar6;
    }
    pvVar4 = (void *)(param_2 + 9);
LAB_ram_480745cc:
    FUN_ram_4ff45158(param_3,pvVar4,uVar7);
    if (*(char *)(param_2 + 8) == '[') {
      uVar6 = uVar10 + 2;
      if (uVar10 + 1 < uVar12) goto LAB_ram_4807468c;
    }
    else if ((uVar10 != 0xffffffff) && (uVar6 = uVar10 + 1, uVar6 != 0xffffffff)) {
LAB_ram_4807468c:
      if (uVar12 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_48195164("%s: __pos (which is %zu) > __size (which is %zu)",
                         "basic_string_view::substr",uVar6,uVar12);
      }
      goto LAB_ram_48074690;
    }
  }
  else {
    if (uVar12 == 0) goto joined_r0x480745f0;
    pvVar4 = memchr(pvVar11,0x3a,uVar12);
    if (pvVar4 != (void *)0x0) {
      uVar10 = (int)pvVar4 - (int)pvVar11;
      pvVar4 = pvVar11;
      uVar7 = uVar10;
      if (uVar12 < uVar10) {
        uVar7 = uVar12;
      }
      goto LAB_ram_480745cc;
    }
    FUN_ram_4ff45158(param_3,pvVar11,uVar12);
    if (*(char *)(param_2 + 8) != '[') goto joined_r0x480745f0;
    uVar6 = 1;
LAB_ram_48074690:
    pbVar8 = (byte *)((int)pvVar11 + uVar6);
    if (uVar6 == uVar12) {
      sVar5 = 0;
    }
    else {
      sVar5 = 0;
      do {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        sVar5 = (bVar1 - 0x30) + sVar5 * 10;
      } while ((byte *)((int)pvVar11 + uVar12) != pbVar8);
    }
    *(short *)((int)param_3 + 0x902) = sVar5;
  }
joined_r0x480745f0:
  if (uVar2 < param_1) {
    __s_00 = (char *)(param_2 + uVar2);
    uVar12 = param_1 - uVar2;
    pvVar11 = memchr(__s_00,0x3f,uVar12);
    if (pvVar11 == (void *)0x0) {
      if (*__s_00 != '/') goto LAB_ram_480746dc;
    }
    else {
      iVar9 = (int)pvVar11 - param_2;
      if (*__s_00 == '/') {
        if (iVar9 == -1) goto LAB_ram_4807463e;
        uVar10 = iVar9 - uVar2;
        if (uVar12 < iVar9 - uVar2) {
          uVar10 = uVar12;
        }
        FUN_ram_4ff45158(__s,__s_00,uVar10);
      }
      else {
        *(undefined1 *)((int)param_3 + 0x302) = 0x2f;
        *(undefined1 *)((int)param_3 + 0x303) = 0;
        if (iVar9 == -1) {
          return iVar3;
        }
      }
      uVar2 = iVar9 + 1;
      if (param_1 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_48195164("%s: __pos (which is %zu) > __size (which is %zu)",
                         "basic_string_view::substr",uVar2,param_1);
      }
      uVar12 = param_1 - uVar2;
      __s = (void *)((int)param_3 + 0x602);
    }
  }
  else {
    if ((uVar2 == 0xffffffff) || (*(char *)(param_2 + uVar2) != '/')) {
LAB_ram_480746dc:
      *(undefined1 *)((int)param_3 + 0x302) = 0x2f;
      *(undefined1 *)((int)param_3 + 0x303) = 0;
      return iVar3;
    }
    uVar12 = param_1 - uVar2;
    if (param_1 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_48195164("%s: __pos (which is %zu) > __size (which is %zu)",
                       "basic_string_view::substr",uVar2,param_1);
    }
  }
LAB_ram_4807463e:
  FUN_ram_4ff45158(__s,uVar2 + param_2,uVar12);
  return iVar3;
}


