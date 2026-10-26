/* Firmware entry: 0x480e1d26 */

undefined4 FUN_ram_480e1d26(int param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  int *piVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = param_1 + 0x8820;
  uVar3 = FUN_ram_48025ba6();
  FUN_ram_4ff3ec14(iVar2,0xffffffff);
  if ((param_2[2] & 0xfdU) == 1) {
    cVar5 = '\0';
    cVar8 = '\x01';
    bVar1 = true;
  }
  else {
    cVar8 = *(char *)(param_1 + 0x8845);
    cVar5 = *param_2;
    bVar1 = false;
    if (cVar8 == '\0') {
      if (*(char *)(param_1 + 0x8838) == '\x01') {
        cVar8 = '\x01';
      }
      else if (*(char *)(param_1 + 0x8858) == '\0') {
        if (*(char *)(param_1 + 0x885b) != '\0') {
          cVar8 = *(char *)(param_1 + 0x8842);
          if (cVar8 == '\0') {
            cVar8 = *(char *)(param_1 + 0x885d) != '\0';
            bVar1 = false;
          }
          else {
            bVar1 = false;
          }
        }
      }
      else {
        cVar8 = '\x01';
      }
    }
  }
  *(char *)(param_1 + 0x8843) = cVar5;
  bVar7 = param_2[1];
  if ((bVar7 != 0xf) &&
     ((uVar6 = bVar7 - 0x1e, 0x1e < (uVar6 & 0xff) || ((0x40008001U >> (uVar6 & 0x1f) & 1) == 0))))
  {
    bVar7 = 0x2d;
  }
  *(byte *)(param_1 + 0x8844) = bVar7;
  *(char *)(param_1 + 0x8842) = cVar8;
  *(undefined4 *)(param_1 + 0x8828) = uVar3;
  *(undefined1 *)(param_1 + 0x885b) = 0;
  *(undefined2 *)(param_1 + 0x885c) = 0;
  *(undefined1 *)(param_1 + 0x885e) = 0;
  *(undefined4 *)(param_1 + 0x8868) = 0;
  *(undefined1 *)(param_1 + 0x883e) = 0;
  *(undefined1 *)(param_1 + 0x8840) = 0;
  *(undefined1 *)(param_1 + 0x8856) = 0;
  *(byte *)(param_1 + 0x8846) = bVar7;
  *(undefined1 *)(param_1 + 0x8845) = *(undefined1 *)(param_1 + 0x8843);
  if (cVar5 == '\0') {
    if (cVar8 == '\0') {
      *(undefined1 *)(param_1 + 0x8848) = 0;
      *(undefined1 *)(param_1 + 0x8857) = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x882c) + 1;
      if (iVar4 == 0) {
        iVar4 = 1;
      }
      *(int *)(param_1 + 0x882c) = iVar4;
      *(undefined4 *)(param_1 + 0x8834) = uVar3;
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
    iVar4 = *(int *)(param_1 + 0x8860) + 1;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    *(int *)(param_1 + 0x8860) = iVar4;
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
  if ((bVar1) && (param_2[3] != '\0')) {
    *(byte *)(param_1 + 0x883d) = bVar7;
    *(undefined1 *)(param_1 + 0x883e) = 1;
  }
  FUN_ram_4ff3ee10(iVar2);
  if (*(int *)(param_1 + 0x89c8) != 0) {
    FUN_ram_4ff3ec14(iVar2,0xffffffff);
    iVar4 = FUN_ram_48053de0(iVar2,param_1 + 0x89d8,uVar3);
    FUN_ram_4ff3ee10(iVar2);
    if (iVar4 == 0) {
      FUN_ram_480dce8c(*(undefined4 *)(param_1 + 0x8500),*(undefined4 *)(param_1 + 0x89c8));
      iVar2 = *(int *)(param_1 + 0x8500);
      piVar9 = (int *)(iVar2 + 0x614);
      do {
        iVar4 = *piVar9 + 1;
        if (iVar4 == 0) {
          iVar4 = 1;
        }
        *piVar9 = iVar4;
        piVar9 = piVar9 + 0x2c;
      } while (piVar9 != (int *)(iVar2 + 0x824));
    }
  }
  FUN_ram_4809f360(param_1 + 0x84a8,uVar3);
  fence();
  *(undefined1 *)(param_1 + 0x8a18) = 0;
  FUN_ram_480599fe(param_1,0);
  return 1;
}


