/* Firmware entry: 0x480b4e36 */

void FUN_ram_480b4e36(int *param_1,char *param_2)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((((char)param_1[10] == '\0') || (iVar3 = param_1[3], iVar3 == 0)) ||
      (*(char *)((int)param_1 + iVar3 + 0x1b) == '\0')) || (param_2 == (char *)0x0))
  goto LAB_ram_480b4e6c;
  if (*(char *)((int)param_1 + iVar3 + 0xf) == '\0') {
    uVar2 = param_1[2];
    if (((uint)param_1[1] < uVar2) || (param_1[1] - uVar2 < 2)) goto LAB_ram_480b4e6c;
    *(undefined1 *)(*param_1 + uVar2) = 0x2c;
    iVar3 = param_1[2];
    param_1[2] = iVar3 + 1;
    *(undefined1 *)(iVar3 + 1 + *param_1) = 0;
    if ((char)param_1[10] == '\0') goto LAB_ram_480b4e6c;
  }
  uVar2 = param_1[2];
  if ((uVar2 <= (uint)param_1[1]) && (1 < param_1[1] - uVar2)) {
    *(undefined1 *)(*param_1 + uVar2) = 0x22;
    iVar3 = param_1[2];
    param_1[2] = iVar3 + 1;
    *(undefined1 *)(iVar3 + 1 + *param_1) = 0;
    if ((char)param_1[10] != '\0') {
      uVar2 = param_1[1];
      uVar4 = param_1[2];
      if ((uVar4 <= uVar2) && (sVar1 = strlen(param_2), sVar1 < uVar2 - uVar4)) {
        FUN_ram_4ff45158(*param_1 + uVar4,param_2,sVar1);
        iVar3 = param_1[2];
        param_1[2] = sVar1 + iVar3;
        *(undefined1 *)(*param_1 + sVar1 + iVar3) = 0;
        iVar3 = FUN_ram_4808c90a(param_1,&DAT_ram_481c67c4,2);
        if (iVar3 == 0) {
          return;
        }
        *(undefined1 *)((int)param_1 + param_1[3] + 0xf) = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        uStack_14 = 0;
        uVar2 = FUN_ram_4819ad74(&uStack_30,0x20,&DAT_ram_481c48f4);
        if ((char)param_1[10] != '\0') {
          uVar4 = param_1[2];
          if ((uVar4 <= (uint)param_1[1]) && (uVar2 < param_1[1] - uVar4)) {
            FUN_ram_4ff45158(*param_1 + uVar4,&uStack_30,uVar2);
            iVar3 = param_1[2];
            param_1[2] = uVar2 + iVar3;
            *(undefined1 *)(*param_1 + uVar2 + iVar3) = 0;
            return;
          }
        }
        *(undefined1 *)(param_1 + 10) = 0;
        return;
      }
    }
  }
LAB_ram_480b4e6c:
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


