/* Firmware entry: 0x480a108a */

bool FUN_ram_480a108a(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined1 auStack_7c [3];
  byte bStack_79;
  char cStack_76;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_48;
  int iStack_3c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(int *)(param_1 + 0x79c) == 0) &&
     ((*(char *)(param_1 + 0x3e0) == '\0' || (*(int *)(param_1 + 0x3e4) != 0)))) {
    FUN_ram_4804a1e6(auStack_7c,param_1 + 0x2b8,param_2);
    if ((iStack_3c == 0) &&
       ((((cStack_74 == '\0' && (cStack_76 == '\0')) && (cStack_73 == '\0')) &&
        ((cStack_72 == '\0' && (cStack_48 == '\0')))))) {
      bVar1 = 1 < bStack_79 && bStack_79 != 10;
    }
    else {
      bVar1 = true;
    }
    return bVar1;
  }
  return true;
}


