/* Firmware entry: 0x48045922 */

char FUN_ram_48045922(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cStack_154;
  char cStack_153;
  char cStack_152;
  char cStack_151;
  char cStack_150;
  char cStack_14f;
  undefined4 uStack_58;
  int iStack_48;
  undefined1 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_1 + 0x297,0xffffffff);
  piVar1 = (int *)*param_1;
  FUN_ram_4ff3ee10(param_1 + 0x297);
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (piVar1 != (int *)0x0) {
    memset(&cStack_154,0,0x134);
    uStack_58 = 0xffffffff;
    uStack_44 = 1;
    iVar2 = (**(code **)(*piVar1 + 0x15c))
                      (piVar1,param_2,&cStack_154,0xffffffff,1,*(code **)(*piVar1 + 0x15c));
    if ((((iVar2 == 0) || (cStack_154 == '\0')) || (cStack_153 == '\0')) ||
       (((cStack_152 != '\0' || (cStack_151 != '\0')) ||
        ((cStack_150 != '\0' || (cStack_14f != '\0')))))) {
      cStack_153 = '\0';
      bVar3 = false;
      if (param_3 == (undefined1 *)0x0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return '\0';
      }
    }
    else {
      if (param_3 == (undefined1 *)0x0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return cStack_153;
      }
      bVar3 = iStack_48 == 0;
    }
    *param_3 = bVar3;
    return cStack_153;
  }
  return '\0';
}


