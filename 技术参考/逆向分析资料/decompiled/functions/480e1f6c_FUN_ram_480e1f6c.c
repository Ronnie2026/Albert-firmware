/* Firmware entry: 0x480e1f6c */

int FUN_ram_480e1f6c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined1 uVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    FUN_ram_4ff3ec14(param_1 + 0x8820,0xffffffff);
    FUN_ram_4ff3ee10(param_1 + 0x8820);
  }
  else {
    FUN_ram_4805c396(param_1,1,2,0xe);
    iVar7 = param_1 + 0x8820;
    FUN_ram_4ff3ec14(iVar7,0xffffffff);
    FUN_ram_4ff3ee10(iVar7);
    uVar2 = FUN_ram_48025ba6();
    FUN_ram_4ff3ec14(iVar7,0xffffffff);
    if (*(char *)(param_1 + 0x885b) != '\0') {
      *(undefined4 *)(param_1 + 0x8828) = uVar2;
      *(undefined1 *)(param_1 + 0x885b) = 0;
      *(undefined2 *)(param_1 + 0x885c) = 0;
      *(undefined1 *)(param_1 + 0x885e) = 0;
      *(undefined4 *)(param_1 + 0x8868) = 0;
      *(undefined1 *)(param_1 + 0x883e) = 0;
      *(undefined1 *)(param_1 + 0x8840) = 0;
      *(undefined1 *)(param_1 + 0x8856) = 0;
      *(char *)(param_1 + 0x8845) = *(char *)(param_1 + 0x8843);
      *(undefined1 *)(param_1 + 0x8846) = *(undefined1 *)(param_1 + 0x8844);
      if (*(char *)(param_1 + 0x8843) == '\0') {
        if (*(char *)(param_1 + 0x8842) == '\0') {
          *(undefined1 *)(param_1 + 0x8848) = 0;
          *(undefined1 *)(param_1 + 0x8857) = 0;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x882c) + 1;
          if (iVar1 == 0) {
            iVar1 = 1;
          }
          *(int *)(param_1 + 0x882c) = iVar1;
          *(undefined4 *)(param_1 + 0x8834) = uVar2;
          *(undefined1 *)(param_1 + 0x883c) = 0;
          *(undefined1 *)(param_1 + 0x883f) = 0;
          *(undefined1 *)(param_1 + 0x8845) = 0;
          *(undefined1 *)(param_1 + 0x8848) = 0;
          *(undefined4 *)(param_1 + 0x8830) = *(undefined4 *)(param_1 + 0x8860);
          *(undefined4 *)(param_1 + 0x8838) = 1;
          *(undefined1 *)(param_1 + 0x8857) = 3;
        }
      }
      else {
        *(undefined2 *)(param_1 + 0x8838) = 0;
        iVar1 = *(int *)(param_1 + 0x8860) + 1;
        if (iVar1 == 0) {
          iVar1 = 1;
        }
        *(int *)(param_1 + 0x8860) = iVar1;
        *(undefined1 *)(param_1 + 0x8857) = 0;
        *(undefined1 *)(param_1 + 0x8859) = 0;
        *(undefined1 *)(param_1 + 0x884b) = 0;
        *(undefined1 *)(param_1 + 0x8853) = 0;
        *(undefined1 *)(param_1 + 0x8855) = 0;
        *(undefined4 *)(param_1 + 0x8884) = 0;
        *(undefined4 *)(param_1 + 0x8888) = 0;
        *(undefined2 *)(param_1 + 0x8850) = 0;
        *(undefined1 *)(param_1 + 0x8845) = 1;
        *(undefined2 *)(param_1 + 0x8848) = 1;
      }
    }
    FUN_ram_4ff3ee10(iVar7);
    uVar2 = FUN_ram_48025ba6();
    FUN_ram_4809f360(param_1 + 0x84a8,uVar2);
    fence();
    *(undefined1 *)(param_1 + 0x8a18) = 0;
  }
  iVar7 = param_1 + 0x8820;
  iVar1 = FUN_ram_48025ba6();
  FUN_ram_4ff3ec14(iVar7,0xffffffff);
  cVar5 = *(char *)(param_1 + 0x885b);
  *(int *)(param_1 + 0x8828) = iVar1;
  if (cVar5 == '\0') {
    if ((*(char *)(param_1 + 0x8845) == '\0') || (*(char *)(param_1 + 0x8850) == '\0')) {
LAB_ram_480e1fce:
      if ((*(char *)(param_1 + 0x8838) != '\x01') ||
         ((uint)(iVar1 - *(int *)(param_1 + 0x8834)) < 10000)) goto LAB_ram_480e1fd8;
LAB_ram_480e23e0:
      *(undefined1 *)(param_1 + 0x8857) = 0;
      *(undefined1 *)(param_1 + 0x8845) = 0;
      *(undefined1 *)(param_1 + 0x8848) = 0;
      *(undefined1 *)(param_1 + 0x883e) = 0;
      *(undefined **)(param_1 + 0x8838) = &mideleg;
LAB_ram_480e23f8:
      *(undefined1 *)(param_1 + 0x883f) = 0;
      if (param_3 != 0xf) goto LAB_ram_480e235c;
LAB_ram_480e2004:
      if (cVar5 != '\0') goto LAB_ram_480e2088;
    }
    else {
      uVar8 = (uint)*(byte *)(param_1 + 0x8846) * 60000;
      iVar6 = *(int *)(param_1 + 0x8884);
      if ((uint)(iVar1 - iVar6) < uVar8) goto LAB_ram_480e1fce;
      *(uint *)(param_1 + 0x8888) = uVar8;
      *(undefined4 *)(param_1 + 0x8884) = 0;
      *(undefined1 *)(param_1 + 0x8845) = 0;
      *(undefined1 *)(param_1 + 0x8848) = 0;
      iVar4 = *(int *)(param_1 + 0x882c) + 1;
      *(undefined1 *)(param_1 + 0x8851) = 1;
      *(undefined1 *)(param_1 + 0x8859) = 1;
      iVar6 = iVar6 + uVar8;
      if (iVar4 == 0) {
        iVar4 = 1;
      }
      *(int *)(param_1 + 0x882c) = iVar4;
      *(int *)(param_1 + 0x8834) = iVar6;
      *(undefined1 *)(param_1 + 0x883c) = 0;
      *(undefined2 *)(param_1 + 0x883e) = 0;
      *(undefined1 *)(param_1 + 0x8840) = 0;
      *(undefined4 *)(param_1 + 0x8830) = *(undefined4 *)(param_1 + 0x8860);
      *(undefined4 *)(param_1 + 0x8838) = 1;
      *(undefined2 *)(param_1 + 0x8856) = 0x300;
      if (9999 < (uint)(iVar1 - iVar6)) goto LAB_ram_480e23e0;
LAB_ram_480e1fd8:
      *(undefined1 *)(param_1 + 0x883f) = 0;
      if (param_3 != 0xf) {
        uVar8 = param_3 - 0x1eU & 0xff;
        if (uVar8 < 0x1f) goto LAB_ram_480e1ff4;
        param_3 = 0x2d;
      }
    }
    iVar6 = 1;
    uVar10 = (undefined1)param_3;
    if (*(char *)(param_1 + 0x8838) == '\x01') {
      *(undefined1 *)(param_1 + 0x8846) = uVar10;
      *(char *)(param_1 + 0x883e) = (char)param_2;
      *(undefined1 *)(param_1 + 0x883d) = uVar10;
      goto LAB_ram_480e2094;
    }
    if (*(char *)(param_1 + 0x8838) != '\x03') {
      *(undefined1 *)(param_1 + 0x8846) = uVar10;
      if (param_2 == 0) {
        if (*(char *)(param_1 + 0x8845) != '\0') {
          *(undefined4 *)(param_1 + 0x8884) = 0;
          *(undefined4 *)(param_1 + 0x8888) = 0;
          *(undefined2 *)(param_1 + 0x8850) = 0;
          iVar4 = *(int *)(param_1 + 0x882c) + 1;
          if (iVar4 == 0) {
            iVar4 = iVar6;
          }
          *(int *)(param_1 + 0x882c) = iVar4;
          *(int *)(param_1 + 0x8834) = iVar1;
          *(undefined1 *)(param_1 + 0x883c) = 0;
          *(undefined1 *)(param_1 + 0x883e) = 0;
          *(undefined1 *)(param_1 + 0x8845) = 0;
          *(undefined1 *)(param_1 + 0x8848) = 0;
          *(undefined1 *)(param_1 + 0x8840) = 0;
          *(undefined4 *)(param_1 + 0x8830) = *(undefined4 *)(param_1 + 0x8860);
          *(undefined4 *)(param_1 + 0x8838) = 1;
          *(undefined2 *)(param_1 + 0x8856) = 0x300;
          param_2 = 0;
          goto LAB_ram_480e2094;
        }
      }
      else {
        if (*(char *)(param_1 + 0x8845) == '\0') {
          iVar4 = *(int *)(param_1 + 0x8860);
          goto joined_r0x480e23ba;
        }
        if ((*(char *)(param_1 + 0x8850) != '\0') &&
           ((uint)(param_3 * 60000) <= (uint)(iVar1 - *(int *)(param_1 + 0x8884)))) {
          *(int *)(param_1 + 0x8888) = param_3 * 60000;
          *(undefined4 *)(param_1 + 0x8884) = 0;
          *(undefined1 *)(param_1 + 0x8851) = 1;
          *(undefined1 *)(param_1 + 0x8845) = 0;
          *(undefined1 *)(param_1 + 0x8848) = 0;
          *(undefined1 *)(param_1 + 0x8859) = 1;
          iVar6 = *(int *)(param_1 + 0x882c) + 1;
          if (iVar6 == 0) {
            iVar6 = 1;
          }
          *(int *)(param_1 + 0x882c) = iVar6;
          *(int *)(param_1 + 0x8834) = iVar1;
          *(undefined1 *)(param_1 + 0x883c) = 0;
          *(undefined1 *)(param_1 + 0x883e) = 0;
          *(undefined1 *)(param_1 + 0x8840) = 0;
          *(undefined4 *)(param_1 + 0x8830) = *(undefined4 *)(param_1 + 0x8860);
          *(undefined4 *)(param_1 + 0x8838) = 1;
          *(undefined2 *)(param_1 + 0x8856) = 0x300;
          param_2 = 0;
          goto LAB_ram_480e2094;
        }
      }
      param_2 = 0;
      goto LAB_ram_480e2094;
    }
    if ((*(char *)(param_1 + 0x8858) == '\0') && (*(char *)(param_1 + 0x8841) == '\0')) {
      *(undefined1 *)(param_1 + 0x8846) = uVar10;
      iVar4 = *(int *)(param_1 + 0x8860);
      if (param_2 == 0) {
        iVar3 = *(int *)(param_1 + 0x882c) + 1;
        if (iVar3 == 0) {
          iVar3 = iVar6;
        }
        *(int *)(param_1 + 0x882c) = iVar3;
        *(int *)(param_1 + 0x8830) = iVar4;
        *(int *)(param_1 + 0x8834) = iVar1;
        *(undefined1 *)(param_1 + 0x883c) = 0;
        *(undefined1 *)(param_1 + 0x883e) = 0;
        *(undefined1 *)(param_1 + 0x8845) = 0;
        *(undefined1 *)(param_1 + 0x8848) = 0;
        *(undefined1 *)(param_1 + 0x8840) = 0;
        *(undefined4 *)(param_1 + 0x8838) = 1;
        *(undefined2 *)(param_1 + 0x8856) = 0x300;
        param_2 = 0;
        goto LAB_ram_480e2094;
      }
      *(undefined2 *)(param_1 + 0x8838) = 0;
joined_r0x480e23ba:
      iVar1 = iVar4 + 1;
      if (iVar4 + 1 == 0) {
        iVar1 = iVar6;
      }
      *(int *)(param_1 + 0x8860) = iVar1;
      *(undefined1 *)(param_1 + 0x8840) = 0;
      *(undefined1 *)(param_1 + 0x8859) = 0;
      *(undefined1 *)(param_1 + 0x884b) = 0;
      *(undefined1 *)(param_1 + 0x8853) = 0;
      *(undefined1 *)(param_1 + 0x8855) = 0;
      *(undefined2 *)(param_1 + 0x8856) = 0;
      *(undefined4 *)(param_1 + 0x8884) = 0;
      *(undefined4 *)(param_1 + 0x8888) = 0;
      *(undefined2 *)(param_1 + 0x8850) = 0;
      *(undefined1 *)(param_1 + 0x8845) = 1;
      *(undefined2 *)(param_1 + 0x8848) = 1;
      param_2 = 0;
      goto LAB_ram_480e2094;
    }
  }
  else {
    if (*(char *)(param_1 + 0x8838) != '\x01') {
      if (cVar5 == '\x01') goto LAB_ram_480e205a;
LAB_ram_480e2352:
      *(undefined1 *)(param_1 + 0x883f) = 0;
      if (param_3 == 0xf) goto LAB_ram_480e2088;
LAB_ram_480e235c:
      uVar8 = param_3 - 0x1eU & 0xff;
      if (uVar8 < 0x1f) {
LAB_ram_480e1ff4:
        if ((0x40008001U >> (uVar8 & 0x1f) & 1) != 0) goto LAB_ram_480e2004;
      }
      param_3 = 0x2d;
      goto LAB_ram_480e2004;
    }
    if (9999 < (uint)(iVar1 - *(int *)(param_1 + 0x8834))) {
      *(undefined1 *)(param_1 + 0x8857) = 0;
      *(undefined1 *)(param_1 + 0x8845) = 0;
      *(undefined1 *)(param_1 + 0x8848) = 0;
      *(undefined1 *)(param_1 + 0x883e) = 0;
      *(undefined **)(param_1 + 0x8838) = &mideleg;
      if (cVar5 == '\x01') goto LAB_ram_480e205a;
      goto LAB_ram_480e23f8;
    }
    if (cVar5 != '\x01') goto LAB_ram_480e2352;
LAB_ram_480e205a:
    if ((uint)(iVar1 - *(int *)(param_1 + 0x8868)) < 0xc9) {
      *(undefined1 *)(param_1 + 0x883f) = 0;
      if (param_3 == 0xf) goto LAB_ram_480e2088;
      uVar8 = param_3 - 0x1eU & 0xff;
      cVar5 = '\x01';
      if (0x1e < uVar8) goto LAB_ram_480e2088;
      goto LAB_ram_480e1ff4;
    }
    *(undefined1 *)(param_1 + 0x883f) = 0;
    *(undefined1 *)(param_1 + 0x885b) = 3;
    *(undefined1 *)(param_1 + 0x885c) = 3;
  }
LAB_ram_480e2088:
  *(undefined1 *)(param_1 + 0x883f) = 1;
  param_2 = 2;
LAB_ram_480e2094:
  FUN_ram_4ff3ee10(iVar7);
  uVar2 = FUN_ram_48025ba6();
  if (*(int *)(param_1 + 0x89c8) != 0) {
    FUN_ram_4ff3ec14(iVar7,0xffffffff);
    iVar1 = FUN_ram_48053de0(iVar7,param_1 + 0x89d8,uVar2);
    FUN_ram_4ff3ee10(iVar7);
    if (iVar1 == 0) {
      FUN_ram_480dce8c(*(undefined4 *)(param_1 + 0x8500),*(undefined4 *)(param_1 + 0x89c8));
      iVar7 = *(int *)(param_1 + 0x8500);
      piVar9 = (int *)(iVar7 + 0x614);
      do {
        iVar1 = *piVar9 + 1;
        if (iVar1 == 0) {
          iVar1 = 1;
        }
        *piVar9 = iVar1;
        piVar9 = piVar9 + 0x2c;
      } while (piVar9 != (int *)(iVar7 + 0x824));
    }
  }
  uVar2 = FUN_ram_48025ba6();
  FUN_ram_4809f360(param_1 + 0x84a8,uVar2);
  FUN_ram_480599fe(param_1,0);
  return param_2;
}


