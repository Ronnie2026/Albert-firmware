/* Firmware entry: 0x481691ac */

int FUN_ram_481691ac(int *param_1,int param_2,int param_3,int *param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  size_t sVar4;
  size_t sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char *__s;
  int iVar9;
  int iVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 != (undefined4 *)0x0) {
    iVar10 = *param_4;
    iVar8 = 0;
    puVar2 = puVar3;
    iVar7 = 0;
    do {
      __s = (char *)puVar2[1];
      if ((__s != (char *)0x0) && (param_2 <= iVar7)) {
        sVar4 = strlen((char *)*puVar2);
        sVar5 = strlen(__s);
        iVar8 = iVar8 + sVar4 + sVar5 + 4;
      }
      iVar9 = iVar7 + 1;
      if (iVar10 + -2 <= iVar8) {
        uVar6 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"HTTP_HEADER",
                         "E (%lu) %s: Buffer length is small to fit all the headers\n",uVar6,
                         "HTTP_HEADER");
        if (iVar8 == 0) {
          return 0;
        }
        puVar3 = (undefined4 *)*param_1;
        if (puVar3 != (undefined4 *)0x0) {
          bVar1 = false;
          goto LAB_ram_4816924e;
        }
        iVar8 = 0;
        goto LAB_ram_481692a6;
      }
      puVar2 = (undefined4 *)puVar2[2];
      iVar7 = iVar9;
    } while (puVar2 != (undefined4 *)0x0);
    if (iVar8 != 0) {
      bVar1 = true;
LAB_ram_4816924e:
      iVar8 = 0;
      iVar10 = 0;
      do {
        while (((puVar3[1] != 0 && (param_2 <= iVar10)) && (iVar10 < iVar7))) {
          iVar9 = FUN_ram_4819ad74(param_3 + iVar8,*param_4 - iVar8,"%s: %s\r\n",*puVar3);
          puVar3 = (undefined4 *)puVar3[2];
          iVar8 = iVar8 + iVar9;
          iVar10 = iVar10 + 1;
          if (puVar3 == (undefined4 *)0x0) goto LAB_ram_48169288;
        }
        puVar3 = (undefined4 *)puVar3[2];
        iVar10 = iVar10 + 1;
      } while (puVar3 != (undefined4 *)0x0);
LAB_ram_48169288:
      if (bVar1) {
        iVar10 = FUN_ram_4819ad74(param_3 + iVar8,*param_4 - iVar8,"\r\n");
        iVar8 = iVar8 + iVar10;
      }
LAB_ram_481692a6:
      *param_4 = iVar8;
      return iVar7;
    }
  }
  return 0;
}


