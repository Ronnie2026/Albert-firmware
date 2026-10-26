/* Firmware entry: 0x4802ec52 */

bool FUN_ram_4802ec52(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char *__s;
  size_t sVar7;
  int iVar8;
  int iVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_1,0,0x70);
  sVar7 = strlen("4d97f369e1a32f126b7121a66a70a53fca628dfa");
  uVar5 = DAT_ram_481c3de0;
  uVar4 = DAT_ram_481c3ddf;
  uVar3 = DAT_ram_481c3dde;
  uVar2 = DAT_ram_481c3ddd;
  uVar1 = DAT_ram_481c3ddc;
  if (sVar7 == 0x28) {
    *param_1 = DAT_ram_481c3ddc;
    param_1[8] = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar5;
    param_1[9] = uVar2;
    param_1[10] = uVar3;
    param_1[0xb] = uVar4;
    param_1[0xc] = uVar5;
    FUN_ram_4ff45158(param_1 + 0x10,"4d97f369e1a32f126b7121a66a70a53fca628dfa",0x29);
    iVar9 = DAT_ram_4ff6dcc8;
    uVar6 = DAT_ram_481c3dea;
    uVar5 = DAT_ram_481c3de9;
    uVar4 = DAT_ram_481c3de8;
    uVar3 = DAT_ram_481c3de7;
    uVar2 = DAT_ram_481c3de6;
    uVar1 = DAT_ram_481c3de5;
    param_1[0x4a] = DAT_ram_481c3de4;
    param_1[0x4b] = uVar1;
    param_1[0x4c] = uVar2;
    param_1[0x4d] = uVar3;
    param_1[0x4e] = uVar4;
    param_1[0x4f] = uVar5;
    param_1[0x50] = uVar6;
    if (iVar9 != 0) {
      __s = (char *)(iVar9 + 0x63cf);
      sVar7 = strlen(__s);
      if (sVar7 == 0x10) {
        FUN_ram_4ff45158(param_1 + 0x39,__s,0x11);
        iVar8 = FUN_ram_4802b91c(&DAT_ram_4ff5c850);
        iVar9 = DAT_ram_4ff6de60;
        if (iVar8 - 1U < 0xffff) {
          *(short *)(param_1 + 0x6a) = (short)iVar8;
          if (iVar9 != 0) {
            iVar9 = *(int *)(iVar9 + 0x10);
            *(int *)(param_1 + 0x6c) = iVar9;
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return iVar9 != 0;
          }
        }
        else {
          *(undefined2 *)(param_1 + 0x6a) = 0;
          if (iVar9 != 0) {
            *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar9 + 0x10);
            return false;
          }
        }
        *(undefined4 *)(param_1 + 0x6c) = 0;
      }
    }
  }
  return false;
}


