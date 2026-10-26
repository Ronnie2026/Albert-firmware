/* Firmware entry: 0x480c9e96 */

void FUN_ram_480c9e96(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char cVar8;
  char cVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 local_c4 [41];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *param_1;
  FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
  puVar10 = (undefined4 *)(iVar2 + 0xb38);
  puVar7 = local_c4;
  do {
    uVar4 = puVar10[1];
    uVar5 = puVar10[2];
    uVar6 = puVar10[3];
    *puVar7 = *puVar10;
    puVar7[1] = uVar4;
    puVar7[2] = uVar5;
    puVar7[3] = uVar6;
    puVar10 = puVar10 + 4;
    puVar7 = puVar7 + 4;
  } while (puVar10 != (undefined4 *)(iVar2 + 0xbd8));
  *puVar7 = *puVar10;
  FUN_ram_4ff3ee10(iVar2 + 0xb18);
  iVar2 = FUN_ram_48025ba6();
  if (*(char *)((int)param_1 + 0x276) == '\0') goto LAB_ram_480c9f50;
  uVar1 = *(ushort *)((int)param_1 + 0x25a);
  iVar11 = param_1[0x9e];
  iVar3 = FUN_ram_4809df80(param_1,uVar1,local_c4,iVar2);
  if (iVar11 == iVar3) {
    iVar12 = *param_1;
    iVar11 = iVar12 + 0xb18;
    iVar3 = param_1[0x9f];
    FUN_ram_4ff3ec14(iVar11,0xffffffff);
    cVar8 = *(char *)(iVar12 + 0xb39);
    FUN_ram_4ff3ee10(iVar11);
    cVar9 = *(char *)(*param_1 + 0x36);
    if ((cVar8 == '\f') || (cVar8 == '\x0e')) {
      if ((cVar9 != '\0') || (*(char *)(*param_1 + 0x37) == '\0')) goto LAB_ram_480c9fb8;
LAB_ram_480c9fce:
      if (uVar1 < 0x32) {
        cVar8 = '\x03';
      }
      else {
        cVar9 = '\0';
        cVar8 = '\0';
        if (((((char)param_1[0xa0] != '\0') &&
             (cVar8 = cVar9, *(char *)((int)param_1 + 0x281) != '\0')) &&
            (*(char *)((int)param_1 + 0x282) != '\0')) &&
           (((uint)(iVar2 - param_1[0xa2]) < 0x5dd && (cVar8 = '\x02', (char)param_1[0xa1] != '\0'))
           )) {
          cVar8 = *(char *)((int)param_1 + 0x283);
        }
      }
    }
    else {
      if (cVar9 == '\0') goto LAB_ram_480c9fce;
LAB_ram_480c9fb8:
      cVar8 = '\x04';
    }
    if ((char)iVar3 == cVar8) goto LAB_ram_480c9f50;
  }
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined2 *)(param_1 + 0x9a) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined2 *)(param_1 + 0x9d) = 0;
  *(undefined1 *)((int)param_1 + 0x276) = 0;
  param_1[0x9e] = 0;
  if (*(char *)((int)param_1 + 0x189) != '\0') {
    FUN_ram_48030e8e(param_1 + 0x96,(short)param_1[99],param_1[0xa7]);
  }
LAB_ram_480c9f50:
  FUN_ram_480c90ae(param_1,local_c4,iVar2);
  FUN_ram_4809ec88(param_1,local_c4);
  return;
}


