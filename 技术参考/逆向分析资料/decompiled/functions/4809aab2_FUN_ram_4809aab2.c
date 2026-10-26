/* Firmware entry: 0x4809aab2 */

void FUN_ram_4809aab2(int param_1,int param_2,uint *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == (uint *)0x0) {
    FUN_ram_4ff3ec14(param_2 + 0x874,0xffffffff);
    if (*(char *)(param_2 + 0x2bd4) != '\0') {
      *(undefined1 *)(param_2 + 0x2bd4) = 0;
      memset((void *)(param_2 + 0x2ad4),0,0x100);
      goto LAB_ram_4809ab42;
    }
LAB_ram_4809ac42:
    bVar1 = false;
    if (*(char *)(param_1 + 0x18c69) != '\0') goto LAB_ram_4809ab56;
LAB_ram_4809ac4c:
    cVar8 = *(char *)(param_2 + 0x884);
    FUN_ram_4ff3ee10(param_2 + 0x874);
    if ((*(char *)(param_1 + 0x18c69) == '\0') && ((bVar1 || (cVar8 != '\0'))))
    goto LAB_ram_4809ac6a;
  }
  else {
    uVar6 = param_4;
    if (0x40 < param_4) {
      uVar6 = 0x40;
    }
    FUN_ram_4ff3ec14(param_2 + 0x874,0xffffffff);
    uVar9 = uVar6 & 0xff;
    if (uVar9 == *(byte *)(param_2 + 0x2bd4)) {
      if (param_4 != 0) {
        puVar5 = (uint *)(param_2 + 0x2ad4);
        uVar7 = 0;
        puVar4 = param_3;
        do {
          uVar7 = uVar7 + 1 & 0xff;
          if (*puVar5 != (*puVar4 & 0x7ff)) goto LAB_ram_4809ac0a;
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar7 < uVar9);
        if (uVar9 != *(byte *)(param_2 + 0x2bd4)) {
LAB_ram_4809ac0a:
          *(char *)(param_2 + 0x2bd4) = (char)uVar6;
          puVar4 = memset((void *)(param_2 + 0x2ad4),0,0x100);
          goto LAB_ram_4809ab22;
        }
      }
      goto LAB_ram_4809ac42;
    }
    *(char *)(param_2 + 0x2bd4) = (char)uVar6;
    puVar4 = memset((void *)(param_2 + 0x2ad4),0,0x100);
    if (param_4 != 0) {
LAB_ram_4809ab22:
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1 & 0xff;
        *puVar4 = *param_3 & 0x7ff;
        param_3 = param_3 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar6 < uVar9);
    }
LAB_ram_4809ab42:
    bVar1 = true;
    *(undefined1 *)(param_2 + 0x884) = 1;
    if (*(char *)(param_1 + 0x18c69) == '\0') goto LAB_ram_4809ac4c;
LAB_ram_4809ab56:
    *(undefined1 *)(param_2 + 0x884) = 0;
    FUN_ram_4ff3ee10(param_2 + 0x874);
    if ((*(char *)(param_1 + 0x18c69) == '\0') && (bVar1)) {
LAB_ram_4809ac6a:
      fence();
      if ((*(char *)(param_1 + 0x18c68) != '\0') && (*(char *)(param_2 + 0x883) == '\0')) {
        FUN_ram_4809660e(param_1,param_2,2,0);
        cVar8 = '\0';
        iVar3 = param_1 + 0x88c;
        do {
          FUN_ram_4ff3ec14(iVar3,0xffffffff);
          if (cVar8 == '\0') {
            cVar8 = *(char *)(iVar3 + 0x10);
          }
          iVar2 = iVar3 + 0x3578;
          FUN_ram_4ff3ee10(iVar3);
          iVar3 = iVar2;
        } while (param_1 + 0xa8f4 != iVar2);
        goto LAB_ram_4809abb6;
      }
    }
  }
  FUN_ram_4809a7b2(param_1,param_2);
  cVar8 = '\0';
  iVar3 = param_1 + 0x88c;
  do {
    FUN_ram_4ff3ec14(iVar3,0xffffffff);
    if (cVar8 == '\0') {
      cVar8 = *(char *)(iVar3 + 0x10);
    }
    iVar2 = iVar3 + 0x3578;
    FUN_ram_4ff3ee10(iVar3);
    iVar3 = iVar2;
  } while (iVar2 != param_1 + 0xa8f4);
LAB_ram_4809abb6:
  *(char *)(param_1 + 0x18c6a) = cVar8;
  return;
}


