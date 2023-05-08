/*Q-50. Create a program for asynchronous programming using async & await .    */

Future<void> main() async {
  print('Fetching user details...');
  var userDetails = await fetchUserDetails();
  print('User details fetched: $userDetails');
}

Future<String> fetchUserDetails() async {
  await Future.delayed(Duration(seconds: 2));
  return 'purvika';
}
